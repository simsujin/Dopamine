## DOPAMINE
###### GCC 사관학교 Team Project · 도파민 중독과 진짜 연결
###### LED Wall 버추얼 프로덕션 · Unreal Engine 5 · After Effects · Blender · Maya

---

### 👥 팀

| 역할 | 이름 | 트랙 | 담당 |
|------|------|------|------|
| 👑 팀장 | 심수진 | 3D 아티스트 | 전체 연출 · 핑크 지하철 · AE 만화경 VFX (CUT14~15) · Blender 구슬 (CUT17) |
| 🎨 3D | 김애리 | 3D 아티스트 | 이리데센트 세계 (입장 문 · 아치 복도 · 퍼 텍스처) |
| 🎨 3D | 장혜원 | 3D 아티스트 | 게임 월드 (브릭 · 파이프 · 코인 · Blueprint) |
| 🎨 3D | 노민혁 | 3D 아티스트 | 음식 판타지 (버거 · 도넛 · 아이스크림) |
| 💻 ICVFX | 강채연 | ICVFX 엔지니어 | 음식 · 게임 월드 UE5 레벨 |
| 💻 ICVFX | 조현민 | ICVFX 엔지니어 | 지하철 · 이리데센트 UE5 레벨 |

---

### 📁 프로젝트 구조

```
Dopamine/
├── Config/
├── Content/
│   ├── Levels/
│   │   ├── Subway_Gray    # CUT01~03  무채색 지하철 (6500K)
│   │   ├── Subway_Pink    # CUT10~13/19/20  핑크 지하철 (3800K)
│   │   ├── Iridescent     # CUT04~06  도파민 세계 입장 · 복도 · 구름
│   │   ├── Fur_World      # CUT07     퍼 텍스처 아치
│   │   ├── Food_World     # CUT08     음식 판타지
│   │   └── Game_World     # CUT09     게임 오브제 월드
│   ├── Materials/
│   ├── Particles/         # Niagara (구름, 크리스탈, 코인, 버블)
│   └── Blueprints/
├── Default.uproject
├── .gitattributes         # Git LFS 설정
└── .gitignore             # Binaries, Intermediate, Saved 제외
```

---

### ⚙️ 개발 환경

| 항목 | 사양 |
|------|------|
| Unreal Engine | 5.x (`Default.uproject` 참고) |
| 렌더 파이프라인 | Lumen + Nanite |
| 파티클 | Niagara |
| VFX | After Effects · CC Kaleida · Optical Flares · Trapcode · Mocha AE |
| 3D CGI | Blender Cycles (CUT17) |
| 색보정 | DaVinci Resolve |
| AI 영상 | Kling AI / Seedance AI |
| 버전 관리 | Git + Git LFS |

---

### 🚀 시작하기

```bash
# 1. 클론
git clone https://github.com/simsujin/Dopamine.git
cd Dopamine

# 2. Git LFS — uasset, umap 바이너리 필수
git lfs install
git lfs pull

# 3. Default.uproject 더블클릭 또는 Epic Games Launcher에서 열기
```

> ⚠️ 처음 열 때 셰이더 컴파일 시간이 걸릴 수 있어요.

---

### 🌿 브랜치 전략

```
main          ← 최종 완성본. 직접 커밋 금지.
dev           ← 통합 개발 브랜치. PR은 여기로.
feat/씬이름   ← 씬 · 작업별 브랜치
fix/XX        ← 버그 수정
```

브랜치 생성 예시

```bash
git checkout -b feat/iridescent-corridor   # 김애리
git checkout -b feat/game-world            # 장혜원
git checkout -b feat/food-world            # 노민혁
git checkout -b feat/level-food-game       # 강채연
git checkout -b feat/level-subway          # 조현민
```

---

### 📝 커밋 메시지

```
[CUT05] 이리데센트 아치 복도 버블 시뮬레이션 추가
[CUT07] 퍼 텍스처 Blueprint 바람 흔들림 설정
[CUT08] 음식 오브제 Subsurface Scattering 머티리얼 적용
[CUT09] 코인 Niagara 스핀 파티클 완성
[LEVEL] 지하철 핑크 레벨 Planar Reflection 세팅
[FIX]   CUT09 코인 스폰 오류 수정
```

---

### 🔀 PR & 머지

1. 작업 완료 → `dev` 브랜치로 PR 생성
2. PR 제목 형식: `[씬/CUT] 작업 내용`
3. 팀장(simsujin) 리뷰 후 머지
4. `main` 머지는 프리프로덕션 마감 스냅샷 + 최종 완성본 기준

---

### ⚠️ 주의사항

- `Binaries/` `Intermediate/` `Saved/` — `.gitignore` 처리됨. 커밋 금지.
- 대용량 에셋 (텍스처, 메쉬, HDR) — 반드시 **Git LFS** 로 추적.
- `.umap` 동시 작업 시 충돌 발생 — 작업 전 팀장 또는 씬 담당자에게 먼저 알려주세요.
- UE5 에셋은 바이너리라 충돌 시 자동 머지 불가. 마지막 커밋으로 덮어써야 해요.

---

### 📅 일정

| 단계 | 기간 | 내용 |
|------|------|------|
| 🟡 프리프로덕션 | ~ 6/14 | UE5 씬 · VFX 템플릿 · AI 테스트 · 배우/의상 확정 |
| 🎥 리허설 10~11주 | 6/15 ~ 6/26 | 팀별 리허설 · LED Wall 렌더링 테스트 · 수정 |
| 🎥 본 촬영 12주 | 6/29 ~ 7/3 | 본 촬영 (웨스트월드 4명) |
| ✂️ 포스트 | 7/6 ~ 7/16 | 렌더 · 편집 · 색보정 |
| 🏁 최종 발표 | 7/24 | 팀별 결과 발표 |

---

### 🔗 관련 자료

- 📋 [팀 노션 허브](https://www.notion.so/359af9b824a38157af55db3577cf6f16)
- 📁 [GCC_Dopamin Google Drive](https://drive.google.com/drive/folders/1exp_-UXrbryPZ6g7XASAw2v215AjwRei?usp=sharing)
- 📊 [ICVFX 프로젝트 일정표](https://docs.google.com/spreadsheets/u/0/d/1Np5u49xShelo-ZUeKKT51VnAlnJ5au0y49Atx9AIzA4/htmlview)

---

<p align="center">GCC_Dopamine Team Project · 2025<br>심수진 · 김애리 · 장혜원 · 노민혁 · 강채연 · 조현민</p>
