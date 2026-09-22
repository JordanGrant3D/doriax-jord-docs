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

## [Object](object.md).setVisible() / isVisible() / setVisibleOnly()

Controls object visibility. `setVisible()` propagates to children while `setVisibleOnly()` affects only the object itself, and `isVisible()` reads back the local flag.

```cpp
void setVisible(bool visible);
bool isVisible() const;
void setVisibleOnly(bool visible);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-visibility.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-visibility.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
