def printCodingArmy(n):
    if n==0:
        return 
    
    print(f"Coding Army {n}")

    printCodingArmy(n-1)


def printAllOds(n):
    if n==0:
        return 
    
    if n%2!=0:
        print(n)
    
    printAllOds(n-1)


def printNums(n):
    if n==0:
        return 

    printNums(n-1)
    
    print(n)


def printTable(n,t=10):
    if t==0:
        return
    
    printTable(n,t-1)

    print(f"{n} x {t} = {n*t}")

def factorial(n):
    if n==0:
        return 1
    
    return n * factorial(n-1)

def power(n,p):
    if p==1:
        return n
    
    return n * power(n,p-1)



# printCodingArmy(10)
# printAllOds(10)
# printNums(10)
# printTable(5)

print(factorial(5))
print(power(4,3))


print(44%4)