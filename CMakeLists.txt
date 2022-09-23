cmake_minimum_required(VERSION 3.16)
project(alx_low_level_programming C)

set(CMAKE_C_STANDARD 11)

add_executable(alx_low_level_programming
        0x1A-hash_tables/0-hash_table_create.c
        0x1A-hash_tables/1-djb2.c
        0x1A-hash_tables/2-key_index.c
        0x1A-hash_tables/3-hash_table_set.c
        0x1A-hash_tables/4-hash_table_get.c
        0x1A-hash_tables/5-hash_table_print.c
        0x1A-hash_tables/5-main.c
        )
