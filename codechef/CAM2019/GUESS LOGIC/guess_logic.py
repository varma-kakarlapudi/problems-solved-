testcase = int(input())
while(testcase):
    testcase = testcase - 1
    n = int(input())
    binary = bin(n)
    s = binary.replace('0b','')
    s=s[::-1]
    print(int(str(s),2))
