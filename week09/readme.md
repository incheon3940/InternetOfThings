✅ 주요 주제
1. Wi-Fi
2. ZigBee
3. IEEE 표준 비교

📡 Wi-Fi
구성: IEEE 802.11 기반, AP(Access Point)와 STA(Station)로 구성
Service Set
BSS: 기본 서비스 세트 (Ad-hoc / Infrastructure 모드)
ESS: 여러 BSS로 구성된 확장 세트

MAC 방식
DCF: CSMA/CA 사용 (분산형)
PCF: Polling 기반 (중앙집중형, 옵션)

CSMA/CA (충돌 회피 방식)
채널 상태 감지 → 랜덤 백오프 → RTS/CTS → 데이터 전송 → ACK
Hidden Terminal Problem 해결에 RTS/CTS 사용
CSMA-CD: 유선 이더넷 방식, 무선에서는 구현 어려움

📶 ZigBee
ZigBee 스택: PHY, MAC, NWK, APS, APL 계층으로 구성
PHY 계층
DSSS 사용, 저전력, 빠른 응답성
3밴드 27채널 (2.4GHz에서 Wi-Fi와 간섭 채널 존재)

MAC 계층
기기 유형: NC, FFD, RFD
비콘 기반 vs 비콘 없음
비콘 없음: Non-slotted CSMA-CA
비콘 사용: Slotted CSMA-CA + Super Frame 구조

Super Frame 구성
비콘 → CAP(경쟁 구간) → CFP(GTS 예약 송신) → 비활성화 구간

프레임 종류
비콘, 데이터, 확인, 명령 프레임

주소 체계
IEEE 주소 (64bit), Short 주소 (16bit), PAN ID 포함
주소 조합에 따라 MAC 프레임 크기 달라짐

🧮 분산 주소 할당 기법
ZigBee 노드들이 자식 노드에게 주소를 분산적으로 할당
장점: 중앙 집중 방식보다 제어 트래픽 감소
Cskip(d): 깊이에 따라 주소 범위 결정
