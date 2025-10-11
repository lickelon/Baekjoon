# [Silver III] Trapped in the Haybales - 10766 

[문제 링크](https://www.acmicpc.net/problem/10766) 

### 성능 요약

메모리: 2528 KB, 시간: 20 ms

### 분류

구현, 브루트포스 알고리즘, 시뮬레이션

### 제출 일자

2025년 10월 12일 02:05:39

### 문제 설명

<p>Farmer John has received a shipment of N large hay bales (1≤N≤4000) and placed them at various locations along the road leading to his barn. Unfortunately, he completely forgets that Bessie the cow is out grazing along the road, and she may now be trapped within the bales!</p>

<p>Each bale j has a size S<sub>j</sub> and a distinct position P<sub>j</sub> giving its location along the one-dimensional road. Bessie the cow starts at some location where there is no hay bale, and can move around freely along the road, even up to the position at which a bale is located, but she cannot cross through this position. As an exception, if she runs in the same direction for D units of distance, she builds up enough speed to break through and permanently eliminate any hay bale of size strictly less than D. Of course, after doing this, she might open up more space to allow her to make a run at other hay bales, eliminating them as well.</p>

<p>Bessie can escape to freedom if she can eventually break through either the leftmost or rightmost hay bale. Please compute the total area of the road consisting of real-valued starting positions from which Bessie cannot escape. For example, if Bessie cannot escape if she starts between hay bales at positions 1 and 5, then these encompass an area of size 4 from which she cannot escape.</p>

### 입력 

 <p>The first line of input contains N. Each of the next N lines describes a bale, and contains two integers giving its size and position, each in the range 1…10<sup>9</sup>.</p>

### 출력 

 <p>Print a single integer, giving the area of the road from which Bessie cannot escape.</p>

