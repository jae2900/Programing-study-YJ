a = [1, 1, 2, 2, 2, 8]
## 동시입력 받는 법 =  split()함수 사용
## map데이터 저장방법을 숙지할것
b = list(map(int, input().split()))

print( *[a[i]-b[i] for i in range(6)] )