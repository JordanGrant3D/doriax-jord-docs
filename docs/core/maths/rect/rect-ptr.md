---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).ptr()

Returns `float*` to `x`, i.e. to the four contiguous floats. Passes the rect straight into APIs taking raw float arrays (e.g. uniform uploads).

```cpp
float* ptr();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-ptr.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-ptr.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
