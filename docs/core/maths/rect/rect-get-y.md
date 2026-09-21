[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).getY()

Returns the `y` field. Reads the top edge without exposing the field for writing.

```cpp
float getY() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-get-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-get-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
