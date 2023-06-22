#!/bin/bash

antlr4 -Dlanguage=Cpp -no-listener -visitor -o libs Scripts.antlr
