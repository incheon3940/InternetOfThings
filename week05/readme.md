🔗 1. 사물인터넷(IoT)<br>
개요 초연결 사회와 4차 산업혁명: 사물과 인간, 데이터가 촘촘하게 연결됨. 
IoT 개념: 인간의 개입 없이 사물 간 정보 교환과 기능 수행. 
IoT의 구성 요소: 연결(네트워크), 정보(센싱), 서비스(정보 제공). 
주요 기술: 
센싱 기술 (스마트 센서, 가상 센싱 등) 
유·무선 통신 (지그비, 블루투스, Wi-Fi, LTE, 5G 등) 
서비스 인터페이스, 플랫폼(디바이스, 데이터, 연결, 서비스) 

🏙 2. IoT 활용 분야 
스마트홈, 스마트시티, 스마트팩토리, 헬스케어 등 일상 및 산업 전반에 적용. 

💻 3. 아두이노 C++ 프로그래밍 기초 
📌 변수 
기본형: int, long, unsigned long, float, bool, char, String 
범위: 전역 변수 vs 지역 변수 
속성: const, static 
📌 연산자 및 조건문 
산술, 비교, 논리, 삼항 연산자 
조건문: if, if else, switch 
📌 반복문 while, do while, for 반복문 
비블로킹(non-blocking) 프로그래밍을 위해 millis() 함수 활용 

🔄 4. 시리얼 통신 
Serial 객체 활용: begin(), print(), write(), printf() 
데이터 송수신: Serial.read(), Serial.available() 
데이터 처리: int/float/문자열 입력, key-value 형태 처리 

⏱ 5. 주기적 실행과 타이머 
delay() 대신 millis(), SimpleTimer 클래스 사용 
논블로킹 방식으로 LED 제어나 센서 데이터 취득 구현 

🧱 6. 함수와 클래스 함수 정의/호출, 매개변수 전달 방식(값, 참조) 
함수 오버로딩, 프로토타입 필요성 
클래스 구조 (.h, .cpp), 생성자, 멤버 변수/함수 정의 및 사용 
라이브러리 구조 (Led.h, Led.cpp, library.properties) 

