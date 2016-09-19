#!/bin/bash

#./bitalino --Ice.Config=../etc/configLearnbot
valgrind --leak-check=yes ./bitalino --Ice.Config=../etc/config
