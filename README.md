# DOPAMINE
### GCC 사관학교 - Team Project — 도파민 중독과 진짜 연결

> 디지털 자극 vs 인간 감정. 감각이 죽은 현대인이 진짜 연결을 발견하는 여정.  
> LED Wall 버추얼 프로덕션 · Unreal Engine 5 · After Effects · Blender · Maya | 
---

## 👥 팀

| 역할 | 이름 | 트랙 | 담당 작업 |
|------|------|------|-----------|
| 👑 팀장 / 디렉터 | 심수진 | 3D 아티스트 | 전체 연출 조율 · 핑크 지하철 내부 공간 · AE 만화경 VFX (CUT14~15) · Blender 구슬 CGI (CUT17) |
| 🎨 3D 아티스트 | 김애리 | 3D 아티스트 | 이리데센트 세계 모델링 (입장 문 · 핑크 대리석 아치 복도 · 퍼 텍스처 공간) |
| 🎨 3D 아티스트 | 장혜원 | 3D 아티스트 | 게임 월드 오브제 모델링 (브릭 · 파이프 · 코인 · Blueprint 호버링) |
| 🎨 3D 아티스트 | 노민혁 | 3D 아티스트 | 음식 판타지 오브제 월드 모델링 (버거 · 도넛 · 아이스크림) |
| 💻 ICVFX | 강채연 | ICVFX 엔지니어 | 음식 · 게임 월드 UE5 레벨 제작 |
| 💻 ICVFX | 조현민 | ICVFX 엔지니어 | 지하철 · 이리데센트 UE5 레벨 제작 |

---

## 📁 프로젝트 구조

```
Dopamine/
├── Config/              # UE5 프로젝트 설정 파일
├── Content/             # 모든 에셋
│   ├── Levels/          # 씬별 레벨 파일 (.umap)
│   │   ├── Subway_Gray  # CUT01/02/03 — 무채색 지하철 (6500K)
│   │   ├── Subway_Pink  # CUT10~13/19/20 — 핑크 지하철 (3800K)
│   │   ├── Iridescent   # CUT04/05/06 — 도파민 세계 입장 · 이리데센트 복도 · 구름
│   │   ├── Fur_World    # CUT07 — 퍼 텍스처 아치 세계
│   │   ├── Food_World   # CUT08 — 음식 판타지
│   │   └── Game_World   # CUT09 — 게임 오브제 월드
│   ├── Materials/       # 이리데센트, 퍼, Subsurface, Planar Reflection 머티리얼
│   ├── Particles/       # Niagara 파티클 (구름, 크리스탈, 코인, 버블)
│   └── Blueprints/      # 게임 오브제 호버링, 환경 BP
├── Default.uproject     # UE5 프로젝트 파일
├── .gitattributes       # Git LFS 설정 (uasset, umap 등 바이너리)
└── .gitignore           # Binaries, Intermediate, Saved 제외
```

---

## ⚙️ 개발 환경

| 항목 | 버전 / 사양 |
|------|------------|
| Unreal Engine | 5.x (버전 확인: `Default.uproject`) |
| 렌더 파이프라인 | Lumen + Nanite |
| 파티클 시스템 | Niagara |
| VFX 후처리 | After Effects (CC Kaleida · Optical Flares · Trapcode · Mocha AE) |
| 3D CGI | Blender Cycles (CUT17 구슬) |
| 색보정 | DaVinci Resolve |
| AI 영상 생성 | Kling AI / Seedance AI |
| 버전 관리 | Git + Git LFS |

---

## 🚀 시작하기

### 1. 레포 클론

```bash
git clone https://github.com/simsujin/Dopamine.git
cd Dopamine
```

### 2. Git LFS 확인

UE5 에셋(`.uasset`, `.umap`)은 Git LFS로 관리돼요. 클론 전 LFS가 설치되어 있어야 해요.

```bash
git lfs install
git lfs pull
```

### 3. UE5에서 열기

`Default.uproject` 파일을 더블클릭하거나, Epic Games Launcher에서 열기.

> ⚠️ 처음 열 때 셰이더 컴파일에 시간이 걸릴 수 있음

---

## 🌿 브랜치 전략

```
main              ← 최종 완성본만. 직접 커밋 금지.
dev               ← 통합 개발 브랜치. PR은 여기로.
feat/씬이름       ← 씬 · 작업별 브랜치
fix/XX            ← 버그 수정
```

**브랜치 생성 예시**
(참고해주세요)
```bash
git checkout -b feat/iridescent-corridor   # 김애리
git checkout -b feat/game-world            # 장혜원
git checkout -b feat/food-world            # 노민혁
git checkout -b feat/level-food-game       # 강채연
git checkout -b feat/level-subway          # 조현민
```

---

## 📝 커밋 메시지 규칙

```
[CUT번호 또는 씬이름] 작업 내용 요약

예시:
[CUT05] 이리데센트 아치 복도 버블 시뮬레이션 추가
[CUT07] 퍼 텍스처 Blueprint 바람 흔들림 설정
[CUT08] 음식 오브제 Subsurface Scattering 머티리얼 적용
[CUT09] 코인 Niagara 스핀 파티클 완성
[LEVEL] 지하철 핑크 레벨 Planar Reflection 6면 세팅
[FIX] CUT09 코인 스폰 오류 수정
```

---

## 🔀 PR & 머지 규칙

1. 작업 완료 → `dev` 브랜치로 PR 생성
2. PR 제목: `[씬/CUT] 작업 내용` 형식으로
3. 팀장(simsujin) 리뷰 후 머지
4. `main` 머지는 프리프로덕션 마감 스냅샷 + 최종 완성본 기준

---

## ⚠️ 주의사항

- **`Binaries/`, `Intermediate/`, `Saved/`** 폴더는 `.gitignore` 처리됨. 절대 커밋 금지.
- **대용량 에셋** (텍스처, 메쉬, HDR 등)은 반드시 **Git LFS**로 추적.
- **레벨 파일(`.umap`)** 동시 작업 시 충돌 발생. 작업 전 팀장 또는 해당 씬 담당자에게 먼저 알려주세요.
- UE5 에셋은 바이너리라 충돌 시 자동 머지 불가. 마지막 커밋 기준으로 덮어써야 해요.

---

## 📅 프로덕션 일정

| 단계 | 기간 | 내용 |
|------|------|------|
| 🟡 프리프로덕션 | ~ 6/14 | UE5 씬 제작 완료 · VFX 템플릿 · AI 테스트 · 배우/의상 확정 |
| 🎥 리허설 (10~11주) | 6/15 ~ 6/26 | 팀별 리허설 · LED Wall 실시간 렌더링 테스트 · 수정 |
| 🎥 본 촬영 (12주) | 6/29 ~ 7/3 | 본 촬영 (웨스트월드 4명) |
| ✂️ 포스트 프로덕션 | 7/6 ~ 7/16 | 렌더 · 편집 · 색보정 |
| 🏁 최종 발표 | 7/24 | 팀별 최종 결과 발표 |

---

## 🔗 관련 자료

- 📋 [팀 노션 허브](https://www.notion.so/359af9b824a38157af55db3577cf6f16) — 연출 노트 · 작업 트래커 · 일정
- 📁 [GCC_Dopamin Google Drive](https://drive.google.com/drive/folders/1exp_-UXrbryPZ6g7XASAw2v215AjwRei?usp=sharing)
- 📊 [ICVFX 프로젝트 일정표](https://docs.google.com/spreadsheets/u/0/d/1Np5u49xShelo-ZUeKKT51VnAlnJ5au0y49Atx9AIzA4/htmlview)

---

<p align="center">
  <sub>GCC_Dopamine Team Project · 2025 · 심수진 · 김애리 · 장혜원 · 노민혁 · 강채연 · 조현민</sub>
</p>
