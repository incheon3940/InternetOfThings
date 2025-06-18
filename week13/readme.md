I. TinyOS 기반 센서 프로그래밍 (NesC 사용)

TinyOS용 NesC 코드 작성

TestAppC.nc, TestC.nc, Test.h 구성

실습 절차
1. Cygwin에서 디렉토리 생성 및 이동
2. GitHub에서 소스코드 다운로드: https://github.com/sonnonet/inhatc
3. 압축 해제 및 디렉토리 복사
4. 코드 수정 후 컴파일: make telosb
5. 센서 노드에 업로드: make telosb install.ID

II. 시리얼 미들웨어 및 데이터 처리
oscilloscope.py: 센서 데이터 수신 및 처리
dustInfluxdb.py: 아두이노로부터 받은 데이터를 InfluxDB에 저장

III. InfluxDB 설치 및 사용
1. 설치 및 Python 라이브러리 구성
2. 데이터베이스 생성
$ influx
> create database dust


IV. Grafana를 이용한 시각화
접속: http://localhost:3000 (기본 ID/PW: admin)
InfluxDB 연결 설정
URL: http://localhost:8086
Database: dust
Dashboard 설정
Measurement: dust
Tag 예시: inhaUni = 2222
Field: dust 값 사용

V. Telegram Bot 연동
Python 코드로 구현
핸들러 등록
메시지 전송 함수 구현
set_timer()를 이용한 주기적 전송 가능

VI. TinyOS 개발 환경 구축 (라즈베리파이)
사전 설치, NesC, TinyOS 툴 설치 필요 (세부 내용 pdf 활용)
