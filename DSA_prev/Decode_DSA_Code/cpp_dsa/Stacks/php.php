<?php
// Setting cookies for user details
setcookie("name", "Shudhanshu Singh", time() + 86400, "/");
setcookie("email", "shudhanshu@example.com", time() + 86400, "/");
setcookie("phone", "9876543210", time() + 86400, "/");
setcookie("registration_number", "BTECH2025001", time() + 86400, "/");

echo "Cookies have been set.<br>";

// Checking if cookies are set
$cookie_names = ["name", "email", "phone", "registration_number"];
$cookie_values = [];

foreach ($cookie_names as $cookie) {
    if (!isset($_COOKIE[$cookie])) {
        echo "Cookie '$cookie' is not set.<br>";
    } else {
        echo "Cookie '$cookie' is set!<br>";
        echo "Value is: " . $_COOKIE[$cookie] . "<br>";
        $cookie_values[$cookie] = $_COOKIE[$cookie];
    }
}

// Print all cookies in an array format
echo "<pre>";
print_r($cookie_values);
echo "</pre>";

// Uncomment the following section to delete cookies
/*
foreach ($cookie_names as $cookie) {
    setcookie($cookie, "", time() - 3600, "/");
}

echo "All cookies have been deleted.<br>";
*/
?>