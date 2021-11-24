/**
 * @file program.h
 * @author Devadarshini
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __header_H__
#define __header_H__
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int compare(char a[],char b[]);

int withdraw(char *name,char *email,char *gender,int age, char *password,int amount,int withdrawammount);

int deposit(char *name,char *email,char *gender,int age, char *password,int amount, int withdrawammount);
