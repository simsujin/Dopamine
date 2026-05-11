# GCC Dopamine — Git 사용 가이드

처음이어도 괜찮습니다. 이 순서대로만 따라하면 됩니다.

---

## 처음 한 번만 — 설치 & 클론

### 1. Git 설치 확인

```bash
git --version
```

버전 숫자가 나오면 설치된 상태입니다. 아무것도 안 나오면 [git-scm.com](https://git-scm.com) 에서 설치하세요.

---

### 2. Git LFS 설치

대용량 파일(uasset, fbx 등)을 다루기 위해 필요합니다.

```bash
brew install git-lfs
git lfs install
```

brew가 없다면 [git-lfs.com](https://git-lfs.com) 에서 설치 파일을 받아서 설치하세요.

---

### 3. 프로젝트 클론

내 컴퓨터에 프로젝트를 가져옵니다. 처음 한 번만 합니다.

```bash
cd ~/Documents
git clone https://github.com/팀레포주소/Dopamine.git
cd Dopamine
```

---

## 작업 시작 전 — 브랜치

브랜치는 내 작업 전용 공간입니다.
main 브랜치를 직접 건드리지 않고, 내 브랜치에서만 작업합니다.

### 담당 브랜치

| 담당자 | 브랜치 이름 |
|--------|------------|
| 김애리 | `feat/iridescent` |
| 장혜원 | `feat/game` |
| 노민혁 | `feat/food` |
| 강채연 | `feat/level-food-game` |
| 조현민 | `feat/level-subway` |

---

### 브랜치 만들고 이동하기

```bash
# 최신 상태 먼저 받기
git pull origin main

# 내 브랜치 만들기 (처음 한 번만)
git checkout -b feat/본인브랜치이름
```

이미 만든 적 있으면 `-b` 없이 입력합니다.

```bash
git checkout feat/본인브랜치이름
```

---

## 작업 후 — 저장하고 올리기

작업하고 나서 아래 4단계를 반복합니다.

---

### Step 1. 변경된 파일 확인

```bash
git status
```

빨간 글씨 = 아직 저장 안 된 파일  
초록 글씨 = 저장 준비된 파일

---

### Step 2. 저장할 파일 선택

```bash
# 전체 추가
git add .

# 특정 폴더만 추가할 경우
git add Content/Assets/World_Iridescent/
```

---

### Step 3. 커밋 — 저장 기록 남기기

```bash
git commit -m "[CUT05] 이리데센트 아치 복도 메시 추가"
```

커밋 메시지 규칙은 아래를 따릅니다.

```
[CUT번호] 작업 내용       →  [CUT07] 퍼 텍스처 오브제 모델링 완성
[LEVEL]   레벨 작업 내용  →  [LEVEL] 핑크 지하철 레벨 세팅
[FIX]     수정 내용       →  [FIX] 이리데센트 머티리얼 UV 오류 수정
```

---

### Step 4. 깃허브에 올리기

```bash
git push origin feat/본인브랜치이름
```

---

## 매일 작업 시작 전 — 최신 상태 받기

다른 팀원이 작업한 내용을 내 컴퓨터에 반영합니다.

```bash
git checkout main
git pull origin main
git checkout feat/본인브랜치이름
git merge main
```

---

## 작업 완료 후 — PR 요청

작업이 완성되면 팀장에게 합쳐달라고 요청합니다.
깃허브 웹사이트에서 버튼만 누르면 됩니다.

```
1. github.com 에서 Dopamine 레포 열기
2. 상단 "Compare & pull request" 클릭
3. 제목 입력 예시: [CUT07] 퍼 오브제 모델링 완성
4. "Create pull request" 클릭
5. 팀장 확인 후 merge
```

---

## 자주 하는 실수 & 해결법

**push가 거절될 때 (rejected)**

```bash
git pull origin feat/본인브랜치이름
git push origin feat/본인브랜치이름
```

**내가 어떤 브랜치에 있는지 모를 때**

```bash
git branch
```

`*` 표시된 것이 현재 내 브랜치입니다.

**파일을 잘못 건드렸을 때**

```bash
git checkout -- .
```

커밋하지 않은 변경사항을 전부 되돌립니다. 신중하게 사용하세요.

---

## 하루 작업 루틴

```
작업 시작
  git pull origin main
  git checkout feat/내브랜치
  git merge main

  [ 작업 진행 ]

작업 종료
  git add .
  git commit -m "[CUT] 작업 내용"
  git push origin feat/내브랜치
```

---

막히면 터미널 에러 메시지 스크린샷을 팀장(수진)에게 보내주세요.  
`git reset --hard` 같은 명령어는 혼자 사용하지 마세요.

---

GCC Dopamine Team — 심수진 · 김애리 · 장혜원 · 노민혁 · 강채연 · 조현민
