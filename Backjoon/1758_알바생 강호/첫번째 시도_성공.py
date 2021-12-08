testcase = int(input())
num = []
for i in range(testcase):
    intput = int(input())
    num.append(intput)

num.sort(reverse = True)
sum_output = 0
for i in range(0,len(num)):
    if num[i] - i > 0:
        sum_output+= num[i]-i
        
sum_output
