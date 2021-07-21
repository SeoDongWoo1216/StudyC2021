# C언어 실습
지금까지 학습한 내용을 바탕으로 프로그램 작성

<br>

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

## 2. 대소문자 판별 정렬 프로그램
- 키보드에서 알파벳을 입력받으면 대문자, 소문자를 구별하여 배열에 저장합니다.
- 저장한 배열을 대문자, 소문자로 각각 정렬하여 출력합니다.
- 알파벳이아니라 숫자나 특수문자를 입력받으면 배열에 저장하지않고, 알파벳만 구별하여 배열에 저장합니다.  <br>

의의 : 알파벳순으로 정렬하는 알고리즘 학습, 알파벳을 저장할 배열 학습, 알파벳이 아닌 다른 값을 입력받았을때 오류 제어 <br>
[소스보기](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/%EB%8C%80%EC%86%8C%EB%AC%B8%EC%9E%90%ED%8C%90%EB%B3%84%20%ED%9B%84%20%EC%A0%95%EB%A0%AC%ED%95%B4%EC%A3%BC%EB%8A%94%20%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8.c)

<br>

<p align = "center">
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EB%8C%80%EC%86%8C%EB%AC%B8%EC%9E%90%20%EC%A0%95%EB%A0%AC%20%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%A8.gif>
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EC%95%8C%ED%8C%8C%EB%B2%B3%EC%A0%95%EB%A0%AC1.PNG>
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EC%95%8C%ED%8C%8C%EB%B2%B3%EC%A0%95%EB%A0%AC2.PNG>
<img src = https://github.com/SeoDongWoo1216/StudyC2021/blob/main/IoT_Test/image/%EC%95%8C%ED%8C%8C%EB%B2%B3%EC%A0%95%EB%A0%AC3.PNG>
</p>

<br>

--------
