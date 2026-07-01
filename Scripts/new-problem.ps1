Clear-Host

# ==========================================
# STEP 1 - Banner
# ==========================================

Write-Host "===================================" -ForegroundColor Cyan
Write-Host "        DSA Mastery" -ForegroundColor Yellow
Write-Host "     New Problem Creator" -ForegroundColor Green
Write-Host "===================================" -ForegroundColor Cyan
Write-Host ""

# ==========================================
# STEP 2 - Problem Name
# ==========================================

$name = Read-Host "Enter Problem Name"

Write-Host ""
Write-Host "Problem Name : $name" -ForegroundColor Green

# ==========================================
# STEP 3 - Pattern Selection
# ==========================================

Write-Host ""
Write-Host "Select Pattern" -ForegroundColor Cyan

Write-Host "1. Arrays"
Write-Host "2. Strings"
Write-Host "3. Hashing"
Write-Host "4. Two Pointers"
Write-Host "23. Math"
Write-Host "24. Matrix"

$pattern = Read-Host "Enter Choice"


switch ($pattern) {

    "1" {
        $folder = "01-Arrays"
        $patternName = "Arrays"
    }

    "2" {
        $folder = "02-Strings"
        $patternName = "Strings"
    }

    "3" {
        $folder = "03-Hashing"
        $patternName = "Hashing"
    }

    "4" {
        $folder = "04-Two-Pointers"
        $patternName = "Two Pointers"
    }

    "23" {
        $folder = "23-Math"
        $patternName = "Math"
    }

    "24" {
        $folder = "24-Matrix"
        $patternName = "Matrix"
    }

    default {
        Write-Host ""
        Write-Host "❌ Invalid Pattern!" -ForegroundColor Red
        exit
    }
}


Write-Host ""
Write-Host "Selected Folder : $folder" -ForegroundColor Green

# ==========================================
# STEP 4 - Difficulty
# ==========================================

Write-Host ""
Write-Host "Select Difficulty" -ForegroundColor Cyan

Write-Host "1. Easy"
Write-Host "2. Medium"
Write-Host "3. Hard"

$difficulty = Read-Host "Enter Choice"

switch ($difficulty) {

    "1" { $level = "Easy" }
    "2" { $level = "Medium" }
    "3" { $level = "Hard" }

    default {

        Write-Host ""
        Write-Host "Invalid Difficulty!" -ForegroundColor Red
        exit

    }

}

Write-Host ""
Write-Host "Selected Difficulty : $level" -ForegroundColor Green

# ==========================================
# STEP 5 - Platform
# ==========================================

Write-Host ""
Write-Host "Select Platform" -ForegroundColor Cyan

Write-Host "1. Practice"
Write-Host "2. LeetCode"
Write-Host "3. GFG"
Write-Host "4. Codeforces"

$platform = Read-Host "Enter Choice"

switch ($platform) {

    "1" { $site = "Practice" }
    "2" { $site = "LeetCode" }
    "3" { $site = "GFG" }
    "4" { $site = "Codeforces" }

    default {

        Write-Host ""
        Write-Host "Invalid Platform!" -ForegroundColor Red
        exit

    }

}

Write-Host ""
Write-Host "Selected Platform : $site" -ForegroundColor Green

# ==========================================
# STEP 6 - Summary
# ==========================================

Write-Host ""
Write-Host "======================================" -ForegroundColor Yellow
Write-Host "Summary" -ForegroundColor Cyan
Write-Host "======================================" -ForegroundColor Yellow

Write-Host "Problem     : $name"
Write-Host "Folder      : $folder"
Write-Host "Difficulty  : $level"
Write-Host "Platform    : $site"

# ==========================================
# STEP 7 - Confirmation
# ==========================================

Write-Host ""

$confirm = Read-Host "Create this problem? (Y/N)"

if ($confirm -ne "Y" -and $confirm -ne "y") {

    Write-Host ""
    Write-Host "Operation Cancelled." -ForegroundColor Yellow
    exit

}

# ==========================================
# STEP 8 - Target Path
# ==========================================

$path = Join-Path $folder $level

Write-Host ""
Write-Host "Target Path : $path" -ForegroundColor Cyan

# ==========================================
# STEP 9 - Create Folder
# ==========================================

if (!(Test-Path $path)) {

    New-Item -ItemType Directory -Path $path | Out-Null

    Write-Host "Folder Created Successfully." -ForegroundColor Green

}
else {

    Write-Host "Folder Already Exists." -ForegroundColor Yellow

}


# ==========================================
# STEP 10 - Count Existing Problems
# ==========================================

$count = (Get-ChildItem -Path $path -Filter "*.cpp").Count

Write-Host ""
Write-Host "Existing Problems : $count" -ForegroundColor Cyan

# ==========================================
# STEP 11 - Generate Next Number
# ==========================================

$nextNumber = $count + 1

Write-Host ""
Write-Host "Next Problem Number : $nextNumber" -ForegroundColor Cyan

# ==========================================
# STEP 12 - Format Problem Number
# ==========================================

$problemId = "{0:D4}" -f $nextNumber

Write-Host ""
Write-Host "Problem ID : $problemId" -ForegroundColor Green

# ==========================================
# STEP 10 - Generate File Name
# ==========================================

$cleanName = $name.Trim().Replace(" ", "_")

$fileName = "${problemId}_${cleanName}.cpp"

Write-Host ""
Write-Host "Generated File Name : $fileName" -ForegroundColor Green

# ==========================================
# STEP 11 - Full Path
# ==========================================

$fullPath = Join-Path $path $fileName

Write-Host ""
Write-Host "Full Path : $fullPath" -ForegroundColor Cyan

# ==========================================
# STEP 13 - Check Duplicate File
# ==========================================

# ==========================================
# STEP 13 - Check Duplicate Problem
# ==========================================

$cleanName = $name.Trim().Replace(" ", "_")

$existingFiles = Get-ChildItem -Path $path -Filter "*.cpp"

foreach ($file in $existingFiles) {

    if ($file.BaseName -match "^\d{4}_(.+)$") {
        $existingProblem = $matches[1]
    }
    else {
        $existingProblem = $file.BaseName
    }

    if ($existingProblem.ToLower() -eq $cleanName.ToLower()) {

        Write-Host ""
        Write-Host "Error: Problem already exists!" -ForegroundColor Red
        exit

    }

}

# ==========================================
# STEP 12 - Generate File From Template
# ==========================================

$template = Get-Content "Templates\Solution_Template.cpp" -Raw

$template = $template.Replace("{{PROBLEM}}", $name)
$template = $template.Replace("{{PLATFORM}}", $site)
$template = $template.Replace("{{PATTERN}}", $patternName)
$template = $template.Replace("{{DIFFICULTY}}", $level)
$template = $template.Replace("{{DATE}}", (Get-Date -Format "dd-MM-yyyy"))

Set-Content -Path $fullPath -Value $template
code -r $fullPath

Write-Host ""
Write-Host "Problem Created Successfully!" -ForegroundColor Green
