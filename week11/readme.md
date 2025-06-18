I. OpenCV 설치

설치 전 확인:
EXTERNALLY-MANAGED 파일 삭제 필요
swap 메모리 용량 변경 (200 → 2048MB)

$ sudo vim /etc/dphys-swapfile
CONF_SWAPSIZE=2048

설치 명령어:
$ pip install opencv-contrib-python
$ sudo apt-get install python3-opencv

설치 후 원상복구:
swap 다시 200MB로 변경

II. USB 카메라 테스트
OpenCV를 사용해 라즈베리파이에서 USB 카메라 작동 확인
실습에 필요한 Python 코드 제공 예정 (자료에는 코드 상세 없음)

III. 텔레그램 봇 설치 및 이미지 전송

1. 텔레그램 봇 만들기
BotFather 검색 후 명령어 사용: /start, /newbot
봇 이름 생성 및 Token 발급받기

2. Telegram API 설치
$ pip install python-telegram-bot --upgrade

GitHub 클론:
$ git clone https://github.com/python-telegram-bot/python-telegram-bot --recursive

3. TimerBot.py 파일 수정
context.job_queue.run_once() 또는 run_repeating() 사용해 자동화 구현
