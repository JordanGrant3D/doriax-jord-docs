---
version: 0.7.1
status: untested # Options: untested, bot-tested, human-tested
---
---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).moveToTop() / moveUp() / moveDown() / moveToBottom()

Control the draw and update order of this object among its siblings. A UI script calls them to raise the focused panel above the rest.

```cpp
void moveToTop();
void moveUp();
void moveDown();
void moveToBottom();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-move-order.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-move-order.h"
```

---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
