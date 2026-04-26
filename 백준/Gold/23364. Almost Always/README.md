# [Gold III] Almost Always - 23364 

[문제 링크](https://www.acmicpc.net/problem/23364) 

### 성능 요약

메모리: 15632 KB, 시간: 252 ms

### 분류

수학, 정수론, 무작위화, 생일 문제

### 제출 일자

2026년 04월 26일 13:41:35

### 문제 설명

<p><img alt="" src="" style="width: 311px; height: 100px; float: right;">Today, your probability theory class covered probabilistic events that occur <em>with high probability</em>. As you are now explaining to your friend, this means that as some parameter $n$ goes to infinity, the probability of this event goes to $1$.</p>

<p>An example of an event that occurs with high probability is the following: given a list of $n$ independent uniform random integers between $1$ and $2\cdot 10^9$, there are two elements such that one divides the other.</p>

<p>Your friend does not believe this, as he can easily come up with many examples where no number divides any other number: Just take any subset of $\{10^9+1, 10^{9}+2, \dots, 2\cdot 10^9\}$ and none of these will divide any other!</p>

<p>To convince your friend, you will show him that you can find two elements that divide each other for exactly $100$ instances of the problem. You are confident this will succeed, since the probability of failure is in fact less than $10^{-25}$ per instance when $n=5\cdot 10^5$.</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with an integer $n$, the number of integers in the list.</li>
	<li>One line containing $n$ independent random integers $a_1, \ldots, a_n$, drawn uniformly from $\{1, 2, \ldots, 2\cdot 10^9\}$.</li>
</ul>

<p>Your submission will be run on exactly $100$ test cases, all of which will have $n=5\cdot 10^5$. The samples are smaller and for illustration only.</p>

<p>Each of your submissions will be run on new random test cases.</p>

### 출력 

 <p>Output two distinct integers $i$ and $j$, indicating that $a_{i}$ divides $a_{j}$.</p>

