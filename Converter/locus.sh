#!/bin/sh

 > /home/josephtheengineer/workspace/EdenProject/Engine/Converter/world.out

for i in {20..50}
do
   /home/josephtheengineer/workspace/EdenProject/Engine/Converter/locus-amoenus /home/josephtheengineer/workspace/EdenProject/Engine/Converter/DirectCity.eden w "slice $i" q
done
