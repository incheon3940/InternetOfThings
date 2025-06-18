📡 Wi-Fi

▶ IEEE 802.11 기반
구성: AP(Access Point) + STA(Station)

Service Set 종류
SS: 단일 AP 기반 (Ad hoc / Infrastructure 모드)
ESS: 여러 BSS 구성

▶ MAC 계층
DCF (Distributed Coordination Function): CSMA/CA 기반
PCF (Point Coordination Function): Polling 방식 (선택사항)

▶ CSMA/CA 동작 방식
1. 채널 상태 감지 (CS)
2. 전송 대기 및 랜덤 백오프
3. RTS/CTS → Data → ACK

▶ 주요 이슈
Collision (충돌): 백오프 방식으로 회피
Hidden Terminal Problem: RTS/CTS로 해결

▶ CSMA-CD는 Ethernet에서 사용되며 무선에는 부적합

📶 ZigBee

▶ ZigBee 스택 구조
PHY (물리), MAC, NWK (네트워크), APS (응용 지원), APL (응용)

▶ PHY 계층 (IEEE 802.15.4)
DSSS 사용, 3개 밴드에 27채널
빠른 응답 + 저전력 (수면기 지원)
일부 채널은 Wi-Fi와 간섭 발생 가능

▶ MAC 계층
기기 유형
NC: 네트워크 코디네이터
FFD: 전기능 디바이스
RFD: 축소기능 디바이스

통신 방식
비콘 없음: Non-slotted CSMA-CA (간단, sleep 어려움)
비콘 있음: Slotted CSMA-CA + 슈퍼프레임 (복잡, sleep 가능)

▶ 슈퍼프레임 구조
구성: 최대 16개의 슬롯
시작: 비콘 → CAP(경쟁) → CFP(GTS 예약) → 비활성화 구간
CFP 구간에서 GTS (보장된 시간 슬롯) 제공

🧮 MAC 프레임 & 주소체계
프레임 종류: 비콘 / 데이터 / 확인 / MAC 명령 프레임
주소:
Extended Address: 64bit (제조사 고유)
Short Address: 16bit (코디네이터 할당)
MAC 주소 구성: PAN ID + 주소

🧭 ZigBee 주소 할당 기법

▶ 분산 주소 할당 (Distributed Address Assignment)
부모 노드가 자식에게 직접 주소 부여
네트워크 트래픽 감소 (중앙집중 방식보다 유리)

▶ 주소 계산식
Cskip(d) 공식:
Cskip(d) = (1 + Cm - Rm - Cm*Rm^(Lm-d-1)) / (1 - Rm)
Cm: 자식 개수, Rm: 라우터 수, Lm: 트리 최대 깊이, d: 현재 노드 깊이
각 노드는 자신의 위치에 따라 주소 범위를 계산
