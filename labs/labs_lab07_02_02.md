---
title: Capitalizer Repeat
keywords: graphics
last_updated: June 22, 2016
summary: "Capitalizer Repeat"
sidebar: labs_sidebar
permalink: /labs_lab07_02_02/
toc: false
---

## Capitalizer Repeat

**Points**: Complete this entire section for 5 points.

Use the ```Capitalizer.java``` file to accomplish the following.
* First execute the existing the ```Capitalizer.java```.
* Change the initial string that is displayed to be a string of your choice.
* There is not many lines of code in ```Capitalizer.java```, but several lines are rather tricky.  In particular, study the following code to make sure you understand what it is doing.

```java
JPanel buttonPanel = new JPanel();
buttonPanel.add
  (
    new JButton
      (
        new AbstractAction("To Lower Case") {
            public void actionPerformed(ActionEvent e) {
                area.setText(area.getText().toLowerCase());
            }
        }
       )
   );
```

