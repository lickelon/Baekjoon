# [Platinum V] AND, OR, XOR 2 - 31422 

[문제 링크](https://www.acmicpc.net/problem/31422) 

### 성능 요약

메모리: 2020 KB, 시간: 88 ms

### 분류

수학, 누적 합, 조합론, 비트마스킹

### 제출 일자

2026년 04월 26일 13:41:35

### 문제 설명

<p>음이 아닌 정수로 이루어진 길이 $N$의 수열 $A_1, A_2, \cdots, A_N$이 주어진다.</p>

<p>$\land, \lor, \oplus$를 각각 Bitwise AND, OR, XOR 연산자로 정의하자. 다음 세 값을 $998\,244\,353$으로 나눈 나머지를 각각 구하여라. $998\,244\,353$은 소수이다.</p>

<p>\[\sum_{i=1}^{N} \sum_{j=i}^{N} \left(A_i \land A_{i+1} \land \cdots \land A_j\right), \qquad \sum_{i=1}^{N} \sum_{j=i}^{N} \left(A_i \lor A_{i+1} \lor \cdots \lor A_j\right), \qquad \sum_{i=1}^{N} \sum_{j=i}^{N} \left(A_i \oplus A_{i+1} \oplus \cdots \oplus A_j\right)\]</p>

### 입력 

 <p>첫 번째 줄에 수열 $A$의 길이 $N$이 주어진다. $(1 \le N \le 200\, 000)$</p>

<p>두 번째 줄에는 수열의 원소를 의미하는 $N$개의 정수 $A_1, \cdots, A_N$이 공백으로 구분되어 주어진다. $(0 \le A_i < 2^{30})$</p>

### 출력 

 <p>첫 번째 줄에 각 경우에 대한 답을 AND, OR, XOR 순으로 공백으로 구분하여 출력한다.</p>

