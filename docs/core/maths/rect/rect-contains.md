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

## [Rect](rect.md).contains(Vector2 point)

Returns `true` when the 2D point lies inside the rectangle (edges inclusive). The standard UI button hover test against the CharacterController mouse cursor.

```cpp
bool contains(Vector2 point);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-contains.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-contains.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
