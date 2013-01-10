#!/usr/bin/env python
#coding:utf-8

skeleton = """/*
page: %(page)s
exercise: %(exercise)s
date: %(date)s
author: Zhu Tao<zhutao.iscas@gmail.com>
*/
#include<stdio.h>


// Main Entry Point
int main(){

    return 0;
}
"""
from optparse import OptionParser
import os, sys
from datetime import datetime



parser = OptionParser()
parser.add_option("-e", "--exercise", dest="exercise", help="exercise ID")
parser.add_option("-d", "--dir", dest="dir", help="dir of the code")
parser.add_option("-p", "--page", dest="page", help="page of the exercise")

(options, args) = parser.parse_args()
if options.exercise and options.dir and options.page:
    post_name = "%s.c" % options.exercise
    path = options.dir
    post_name = os.path.join(path, post_name)
    if os.path.exists(post_name):
        print "%s already exists!" % post_name
        parser.print_help()
        sys.exit(0)
    else:
        now = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        cont = skeleton % {"page" : options.page, "exercise" : options.exercise, "date" : now}
        fh = open(post_name, "w")
        fh.write(cont)
        fh.close()
        print "%s created successfully!" % post_name
        sys.exit(0)
else:
    print "You must specify category of the post, and also the name of the file"
    parser.print_help()
    sys.exit(0)


