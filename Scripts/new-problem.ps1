Clear-Host

Write-Host "===================================" -ForegroundColor Cyan
Write-Host "        DSA Mastery" -ForegroundColor Yellow
Write-Host "     New Problem Creator" -ForegroundColor Green
Write-Host "===================================" -ForegroundColor Cyan
Write-Host ""

$name = Read-Host "Enter Problem Name"

Write-Host ""
Write-Host "Problem Name: $name" -ForegroundColor Green


Write-Host ""

Write-Host "Select Pattern" -ForegroundColor Cyan
Write-Host "1. Arrays"
Write-Host "2. Strings"
Write-Host "3. Hashing"
Write-Host "4. Two Pointers"
Write-Host "23. Math"
Write-Host "24. Matrix"

$pattern = Read-Host "Enter Choice"

Write-Host ""
Write-Host "Selected Pattern : $pattern" -ForegroundColor Green