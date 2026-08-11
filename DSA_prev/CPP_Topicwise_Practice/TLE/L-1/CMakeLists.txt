cmake_minimum_required(VERSION 3.31)
project(aaaaaaaaGraph)

set(CMAKE_CXX_STANDARD 14)

include_directories(Bitoperations)

add_executable(aaaaaaaaGraph
        Bitoperations/first.cpp
        Bitoperations/first.h
        Bitoperations/sc.cpp
        Numbers/1143B.cpp
        Numbers/1165D.cpp
        Numbers/1285.cpp
        Numbers/1474B.cpp
        Numbers/1521A.cpp
        Numbers/1549A.cpp
        Numbers/1617B.cpp
        Numbers/682A.cpp
        Numbers/797A.cpp
        "Numbers/max gcd.cpp"
        Numbers/sieveOfEratosthenes.cpp
        String/char.cpp
        String/substr.cpp
        String/tempCodeRunnerFile.cpp
        "TLE L--1/1428c.cpp"
        "TLE L--1/magic_number.cpp"
        "TLE L--1/Number group.cpp"
        "TLE L--1/range_Sum.cpp"
        "TLE L--1/system_of_equation.cpp"
        "TLE L--1/tempCodeRunnerFile.cpp"
        "TLE L--1/Three_Numbers.cpp"
        adjacency_map.cpp
        AdjacencyList.cpp
        allpath.cpp
        any_path.cpp
        connected_components.cpp
        cycle_detection_using_bfs.cpp
        cycle_detection_using_dfs.cpp
        cycle_detection_using_DSU.cpp
        DSU.cpp
        DSU_min_max.cpp
        kruskals.cpp
        leetcode_200_no_of_islands.cpp
        Minimum-knights-moves.cpp
        Prism.cpp
        shortest_path_bfs.cpp
        tempCodeRunnerFile.cpp
        topological_sort_kahn_algo.cpp
        wallsandgates.cpp
        weighted_adj_list.cpp)
