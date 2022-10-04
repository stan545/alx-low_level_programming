#!/bin/sh
git add .

read -p 'commit message: ' $cm

git commit -m '$cm'

git push
