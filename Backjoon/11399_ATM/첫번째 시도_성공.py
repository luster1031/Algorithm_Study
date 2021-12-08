testcase = int(input())
a = list(map(int,input().split()))
a.sort()
sum = 0
output = 0
for i in a:
    sum += i
    output += sum
print(output)
