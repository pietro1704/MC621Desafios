

def solveGameString(gameString):
    for i in range(1, len(gameString)):
        print(i)
        if gameString[i] != gameString[i - 1]: 
            print(gameString[i - 1], 'diferente de', gameString[i])
            newString = test_str[:i] +  test_str[i-2:] 
        
    return

numberOfTests = int(input())

for i in range(numberOfTests):
    gameString = input()
    solveGameString(gameString)

        
