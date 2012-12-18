#coding:utf-8
skeleton = """---
layout: note
title: Notes for %(path)s
category: %(category)s
tags: 
---

## 章节

## 要点

## 心得

"""

from optparse import OptionParser
import os, sys
from datetime import datetime



parser = OptionParser()
parser.add_option("-c", "--category", dest="category", help="category of the post")
parser.add_option("-p", "--path", dest="path", help="path of the post")

(options, args) = parser.parse_args()
if options.category and options.path:
    post_name = "note.markdown"
    path = options.path
    post_name = os.path.join(path, post_name)
    if os.path.exists(post_name):
        print "%s already exists!" % post_name
        parser.print_help()
        sys.exit(0)
    else:
        cont = skeleton % {"category" : options.category, "path" : path}
        fh = open(post_name, "w")
        fh.write(cont)
        fh.close()
        print "%s created successfully!" % post_name
        sys.exit(0)
else:
    print "You must specify category of the post, and also the name of the file"
    parser.print_help()
    sys.exit(0)


