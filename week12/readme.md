I. Zigbee TinyOS 기반 온습도 센서
TinyOS 기반 코드 작성 (TestAppC.nc, TestC.nc, Test.h)
ZigBee 네트워크를 통해 센서 데이터 수집

II. Python Middleware
oscilloscope.py: 센서 데이터 시리얼 통신 처리
dustInfluxdb.py: Arduino에서 수신한 데이터를 InfluxDB에 저장

III. InfluxDB 설치 및 설정
데이터베이스 생성
$ influx
> create database dust
Python에서 InfluxDB 라이브러리 사용

📊 Grafana를 통한 시각화

1. Grafana 설치 후 접속
주소: http://localhost:3000 (기본 ID/PW: admin / admin)

2. InfluxDB와 연결 설정
URL: http://localhost:8086
Database: dust, User: root, Password: root

3. Dashboard 설정
Data source: InfluxDB
Measurement: dust
Tag 예시: inhaUni = 2222
Field: dust 값 시각화

🤖 TelegramBot 연동 (Arduino → Python)
Python에서 시리얼 데이터를 수신 후 텔레그램으로 알림 전송

기능:
handler 등록
메시지 전송 함수 구현
set_timer() 등으로 자동 전송 설정
