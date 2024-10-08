# [Platinum IV] 보트 정박 - 23024 

[문제 링크](https://www.acmicpc.net/problem/23024) 

### 성능 요약

메모리: 13948 KB, 시간: 960 ms

### 분류

이분 탐색, 자료 구조, 세그먼트 트리

### 제출 일자

2024년 10월 5일 22:36:44

### 문제 설명

<p>Albert는 호숫가를 따라 보트 정박소를 운영하고 있다.</p>

<p>보트 정박소에는 총 n개의 작은 부두가 좌측에서 우측으로 1번부터 n번까지 번호가 붙어있다. i번째 부두는 길이가 P[i]이하인 보트를 정박할 때 이용할 수 있다. 각 부두에는 최대 한 대의 보트만 정박할 수 있다. 오늘 정박소에는 총 m대의 보트가 순서대로 진입할 예정이다 (진입하는 순서대로 1번부터 m번까지 번호가 붙어있다). j번째 보트의 길이는 B[j]라 하자.</p>

<p>각 보트는 아래 규칙에 따라 부두에 보트를 정박하거나 혹은 정박소를 통과한다.</p>

<ol>
	<li>각 보트는 좌측에서 진입하여 우측으로 진행하면서 해당 보트가 정박할 수 있는 비어있는 부두가 있다면 해당 부두에 정박한다. (가령 부두 i가 비어있고 P[i] ≥ B[j] 라면 j번째 보트는 부두 i에 정박할 수 있다.)</li>
	<li>만약 정박할 수 있는 부두가 없다면 해당 보트는 정박하지 않고 빠져나간다.</li>
</ol>

<p>예를 들어 n = 3, m = 5, P = [2, 2, 2], B = [1, 2, 3, 2, 1] 이라 하자 (아래 그림 참고).</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/6f04aa92-4c78-409d-8ac4-0d2845dba093/-/preview/" style="height: 136px; width: 500px;"></p>

<p>이 때, 보트들이 순서대로 정박소를 통과하는 과정은 아래와 같다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/fd140e5f-9708-4bd8-803f-9bbebf5e9099/-/preview/" style="height: 149px; width: 500px;"></p>

<ul>
	<li>길이가 1인 1번 보트는 1번 부두에 정박한다. (좌측 그림 참고)</li>
	<li>길이가 2인 2번 보트는 1번 부두가 비어있지 않으므로 2번 부두에 정박한다. (중간 그림 참고)</li>
	<li>길이가 3인 3번 보트는 3번 부두가 비어있지만 보트의 길이가 너무 길어 정박할 수 없으므로 정박소를 통과한다.</li>
	<li>길이가 2인 4번 보트는 3번 부두에 정박한다. (우측 그림 참고)</li>
	<li>길이가 1인 5번 보트는 정박소를 통과한다.</li>
</ul>

<p>모든 보트가 정박을 마치거나 정박소를 빠져나간 후, 각 부두 i에 정박한 보트의 번호를 A[i]라 하자. 만약 정박한 보트가 없다면 A[i] = 0으로 정의한다.</p>

<p>Albert는 A[1] × 1 + A[2] × 2 + ... + A[n] × n 값이 무엇인지 궁금하다 - Albert를 도와 이 값을 계산해주자. 위 예제의 경우, 마지막 보트가 정박소를 빠져나간 후 A = [1, 2, 4]가 되므로 정답은 17이다.</p>

### 입력 

 <p>첫 줄에 테스트 케이스의 수 T가 주어진다.</p>

<p>각 테스트 케이스는 세 줄에 걸쳐 주어진다.</p>

<p>첫 줄에 n과 m이 공백으로 구분되어 주어진다.</p>

<p>둘째 줄에 n개의 정수가 (P[1], ..., P[n]) 공백으로 구분되어 주어진다.</p>

<p>셋째 줄에 m개의 정수가 (B[1], ..., B[m]) 공백으로 구분되어 주어진다.</p>

### 출력 

 <p>각 테스트 케이스의 답을 각 줄에 출력한다.</p>

