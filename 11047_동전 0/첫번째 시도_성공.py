testcase, won = map(int, input().split())
input_num = 0
cost = []
output_count = 0

for i in range(testcase):
    input_num = int(input())
    if won >= input_num :
        cost.append(input_num)

for i in range(len(cost)):
    output_count += (won // cost[len(cost)-i-1])
    won %= cost[len(cost)-i-1]
print(output_count)
