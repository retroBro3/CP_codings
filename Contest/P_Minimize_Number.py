n = int(input())
flag = True

number_list = list(map(int, input().split()))

cnt = 0
while flag:
    for item in number_list:
        if item%2 != 0:
           flag = False
           break
        item = item//2
    if flag:
        cnt += 1

print(cnt)