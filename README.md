# StudyC2021

C언어 학습 리포지토리 <br><br>
교재 : 혼자 공부하는 C언어 <br><br>
각 링크의 리드미를 참조하세요 <br>

--------------------------------------------------

## 학습
- [2. 상수와 데이터 출력](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210427_Chapter2)
- [3. 변수와 데이터 입력](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210427_Chapter3)
- [4. 연산자](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210428_Chapter4)
- [5. 선택문](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210428_Chapter5)
- [6. 반복문](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210428_Chapter6)
- [7. 함수](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210429_Chapter7)
- [8. 배열](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210429_Chapter8)
- [9. 포인터](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210430_Chapter9)
- [10. 배열과 포인터](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210403_Chapter10)
- [11. 문자](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210503_Chapter11)
- [12. 문자열1](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210503_Chapter12), [문자열2](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210504_Chapter12_2)
- [13. 변수의 영역과 데이터 공유](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210504_Chapter13)
- [14. 다차원 배열과 포인터 배열](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210504_Chapter14)
- [15. 응용 포인터](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210506_Chapter15)
- [16. 메모리 할당](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210506_Chapter16)
- [17. 사용자 정의 자료형](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210507_Chapter17)
- [18. 파일 입출력](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210511_Chapter18)
- [19. 전처리와 분할 컴파일](https://github.com/SeoDongWoo1216/StudyC2021/tree/main/210511_Chapter19)

--------------

# 실습
학습한 내용을 바탕으로 프로그램 구현해보기
1. 콘솔을 이용한 피트니트 회원관리 프로그램
2. 알파벳 대소문자 정렬 프로그램

------------------------------------

## 1. 콘솔을 이용한 피트니스 회원관리 프로그램
- 피트니스 회원관리 프로그램은 회원 번호, 회원 이름, 회원 체중을 입력하면 입력한 값이 메모리에 동적할당됩니다.
- 회원 번호 입력때 음수를 입력하면 해당 프로그램은 종료됩니다.
- 프로그램이 종료될때 동적 할당된 메모리의 값을 검사합니다.
- 전체 회원 수, 회원들의 평균 체중, 최대 체중을 가진 회원의 정보, 모든 회원들의 정보들을 출력합니다.
- 모든 정보를 출력하고 동적 할당된 메모리를 할당 해제해주면서 프로그램이 종료됩니다. <br>

의의 : 사용자가 입력받은 값을 메모리에 동적할당하고, 저장된 데이터값 중에 원하는 값을 불러올 수 있는 역량 강화

[소스보기](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/%ED%9C%98%ED%8A%B8%EB%8B%88%EC%8A%A4%20%ED%9A%8C%EC%9B%90%EA%B4%80%EB%A6%AC%20%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8.c)
<br>

<!-- 피트니스 회원관리 움짤, 실행화면 이미지 -->
<p align = "center">
<img src = "https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%ED%9C%98%ED%8A%B8%EB%8B%88%EC%8A%A4%20%EA%B4%80%EB%A6%AC%20%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8.gif">
  <img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%ED%9C%98%ED%8A%B8%EB%8B%88%EC%8A%A41.PNG>
  <img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%ED%9C%98%ED%8A%B8%EB%8B%88%EC%8A%A42.PNG>
</p>

<br><br>

---

## 2. 대소문자 판별 및 정렬 프로그램
- 키보드에서 알파벳을 입력받으면 대문자, 소문자를 구별하여 배열에 저장합니다.
- 저장한 배열을 대문자, 소문자로 각각 정렬하여 출력합니다.
- 알파벳이아니라 숫자나 특수문자를 입력받으면 배열에 저장하지않고, 알파벳만 구별하여 배열에 저장합니다.  <br>

의의 : 알파벳순으로 정렬하는 알고리즘 학습, 알파벳을 저장할 배열 학습, 알파벳이 아닌 다른 값을 입력받았을때 오류 제어 <br>
[소스보기](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/%EB%8C%80%EC%86%8C%EB%AC%B8%EC%9E%90%ED%8C%90%EB%B3%84%20%ED%9B%84%20%EC%A0%95%EB%A0%AC%ED%95%B4%EC%A3%BC%EB%8A%94%20%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8.c)

<br>

<!-- 대소문자 판별 및 정렬 프로그램 실행화면 및 움짤 -->
<p align = "center">
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EB%8C%80%EC%86%8C%EB%AC%B8%EC%9E%90%20%EC%A0%95%EB%A0%AC%20%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8.gif>
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EC%95%8C%ED%8C%8C%EB%B2%B3%EC%A0%95%EB%A0%AC1.PNG>
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EC%95%8C%ED%8C%8C%EB%B2%B3%EC%A0%95%EB%A0%AC2.PNG>
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EC%95%8C%ED%8C%8C%EB%B2%B3%EC%A0%95%EB%A0%AC3.PNG>
</p>

<br>

--------
