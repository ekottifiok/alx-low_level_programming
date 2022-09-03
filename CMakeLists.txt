cmake_minimum_required(VERSION 3.16)
project(alx_low_level_programming C)

set(CMAKE_C_STANDARD 11)

add_executable(alx_low_level_programming
        0x17-doubly_linked_lists/3-add_dnodeint_end.c
        0x17-doubly_linked_lists/0-print_dlistint.c
        0x17-doubly_linked_lists/4-free_dlistint.c
        0x17-doubly_linked_lists/5-get_dnodeint.c
        0x17-doubly_linked_lists/2-add_dnodeint.c
        0x17-doubly_linked_lists/1-dlistint_len.c
        0x17-doubly_linked_lists/6-sum_dlistint.c
        0x17-doubly_linked_lists/7-insert_dnodeint.c
        0x17-doubly_linked_lists/8-delete_dnodeint.c
        0x17-doubly_linked_lists/8-main.c
        )
