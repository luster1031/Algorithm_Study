import sys
input = sys.stdin.readline
testcase = int(input())

input_num = [int(input()) for _ in range(testcase)]
input_num.sort(reverse= True)

sum_output = 0
for i in range(testcase):
    if input_num[i] - i >0:
        sum_output += input_num[i]-i
print(sum_output)
