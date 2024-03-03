//
// Created by yaros on 03.03.2024.
//
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <memory.h>

#ifndef UNTITLED1_VECTORVOID_H
#define UNTITLED1_VECTORVOID_H


typedef struct vectorVoid {
    void *data;
    size_t size;
    size_t capacity;
    size_t baseTypeSize;
} vectorVoid;

#endif //UNTITLED1_VECTORVOID_H