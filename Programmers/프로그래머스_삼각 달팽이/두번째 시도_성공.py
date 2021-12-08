def solution(n):
    answer = []
    output = [[0 for col in range(n+1)] for row in range(n+1)]
    col = 0
    row = 0
    count = 1
    one_num = 0
    cal = 0
    while True:
        cal = n - one_num - 1
        for i in range(0,cal):
            if col >n or row > n  or output[col][row] > 0 :break
            output[col][row] = count
            count+=1
            col+=1
            
        for i in range(0,cal):
            if col >n or row > n  or output[col][row] > 0 :break
            output[col][row] = count
            count+=1
            row+=1
        for i in range(0,cal):
            if col >n or row >n  or output[col][row] > 0 :break
            output[col][row] = count
            count += 1
            col-=1
            row-=1
        if(output[col][row] == 0):
            output[col][row] = count
            count += 1
        
        one_num += 3
        col += 2
        row += 1
        if col >n or row >n  or output[col][row] > 0 :break
    count = 0
    for i in range(n):
        for j in range(n):
            if output[i][j] > 0:
                answer.append(output[i][j])
    return answer
