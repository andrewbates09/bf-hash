#!/usr/bin/python3

#
#


''' IMPORTS '''

import os
# import sys


''' FUNCTIONS '''

# simple cross platform clear screen
def clearScreen():
    if os.name == 'posix':
        os.system('clear')
    else:
        os.system('cls')


# main test suite
def mainTestSuite():
    userChoice = 0
    anyKey = 0
    while(userChoice != 2):
        clearScreen()
        print('Welcome to the BF-Hash Testuing Suite.\n\n'
              'Options\n'
              '\t1. Test BF Hash\n'
              '\t2. Test BF Prime\n'
              '\t3. Test ALL\n')
        try:
            userChoice = int (input('Enter your choice: '))
            if (userChoice == 1):
                testBFHash()
                anykey = input('Completed testing BF Hash. See log for details. (press enter to continue) ')
            elif (userChoice == 2):
                testBFPrime()
                anykey = input('Completed testing BF Prime. See log for details. (press enter to continue) ')
            elif (userChoice == 3):
                testBFHash()
                testBFPrime()
                anykey = input('Completed testing BF Hash & Prime. See log for details. (press enter to continue) ')
            elif (userChoice == 4):
                print('\nDid that go the way you thought it would?\n')
                break
        except ValueError:
            anyKey = input('Please enter a valid coice. (press enter to continue) ')

    return

mainTestSuite()
