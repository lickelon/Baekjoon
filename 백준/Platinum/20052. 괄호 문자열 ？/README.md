# [Platinum IV] 괄호 문자열 ? - 20052 

[문제 링크](https://www.acmicpc.net/problem/20052) 

### 성능 요약

메모리: 4236 KB, 시간: 60 ms

### 분류

자료 구조, 누적 합, 세그먼트 트리

### 제출 일자

2024년 10월 3일 22:45:18

### 문제 설명

<p>괄호 문자열은 '('와 ')'로 이루어진 문자열이고, 올바른 괄호 문자열은 다음과 같이 정의된다.</p>

<ol>
	<li>빈 문자열은 올바른 괄호 문자열이다.</li>
	<li>S가 올바른 괄호 문자열일 때, (S)도 올바른 괄호 문자열이다.</li>
	<li>S와 T가 올바른 괄호 문자열이라면, ST도 올바른 괄호 문자열이다.</li>
	<li>모든 올바른 괄호 문자열은 위의 3개 규칙으로만 만들 수 있다.</li>
</ol>

<p>'('와 ')'로 이루어진 괄호 문자열 S = s<sub>1</sub>s<sub>2</sub>...s<sub>N</sub>과 M개의 쿼리가 주어진다. 쿼리는 두 정수 i, j (1 ≤ i ≤ j ≤ N)로 이루어져 있고, 쿼리가 의미하는 것은 다음과 같다.</p>

<ul>
	<li>S의 부분 문자열 S<sub>i</sub>S<sub>i+1</sub>...S<sub>j</sub>가 올바른 괄호 문자열이면 1, 아니면 0</li>
</ul>

<p>모든 쿼리를 수행하고, 쿼리의 결과를 누적한 값을 구해보자.</p>

<ul>
</ul>

### 입력 

 <p>첫째 줄에 문자열 S가 주어진다. 둘째 줄에 쿼리의 개수 M이 주어진다. 셋째 줄부터 M개의 줄에 쿼리가 한 줄에 하나씩 주어진다.</p>

### 출력 

 <p>쿼리의 결과를 누적한 값을 출력한다.</p>

