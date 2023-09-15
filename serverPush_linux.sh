#!/bin/bash
# ----- Azur3-bit Personal Server ----- 

# Checking if Git is installed
git --version > /dev/null 2>&1
if [ $? -ne 0 ]; then
  echo "-------- *** Git is not installed ***--------"
  exit 1
fi

# Hello Sunil - root User
git rev-parse --is-inside-work-tree > /dev/null 2>&1
if [ $? -ne 0 ]; then
  echo "Not inside a working repository. Please navigate to a Git repository."
  exit 1
fi

# Performing serverPush
git add .
git commit -m "pushing into server"
git push

echo "Server push completed successfully."
read -p "Press Enter to exit"
exit 0
