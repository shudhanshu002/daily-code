import requests
import base64
import json

url = "https://workwithus.staging.scalerailabs.com/g/lwlAQ71Wk3sF-aW06e3I"
headers = {
    "Authorization": "Bearer eyJjbGVhcmVkIjozLCJleHAiOjE3ODY2ODU3NzgsImlhdCI6MTc4NjUxNDQxNCwicmVmIjoiOTcwOTQwNDNiZDU2OTM3YiJ9.96u9aRppGRWCl_-OfKcwnA",
    "Content-Type": "application/json"
}

print("Fetching new trivia questions...")
res = requests.get(url, headers=headers).json()

if "token" not in res:
    print("Error:", res)
    exit()

# middle part 
trivia_token = res["token"]
payload_b64 = trivia_token.split(".")[1]

# base64 
payload_b64 += "=" * ((4 - len(payload_b64) % 4) % 4)
payload_json = base64.urlsafe_b64decode(payload_b64).decode('utf-8')
payload_data = json.loads(payload_json)


answers_array = payload_data["a"]
formatted_answers = []

for i, q in enumerate(res["questions"]):
    if q["answer_type"] == "int":
        formatted_answers.append(int(answers_array[i]))
    else:
        formatted_answers.append(str(answers_array[i]))

print("Decoded answers instantly:", formatted_answers)
post_data = {
    "token": trivia_token,
    "answers": formatted_answers
}

print("Submitting to the doorman...")
submit_res = requests.post(url, headers=headers, json=post_data)

print("\n--- Final Result ---")
print(json.dumps(submit_res.json(), indent=4))