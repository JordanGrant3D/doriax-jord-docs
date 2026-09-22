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

## [Object](object.md).updateTransform()

Forces an immediate recalculation of the world transform via the RenderSystem. The engine handles this automatically each frame, so only call it when you need an up-to-date world transform outside the normal update order. Writing a transform from `onFixedUpdate` is one such case: the physics step reads the world transform, which is otherwise only refreshed once per frame.

```cpp
void updateTransform();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-update-transform.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-update-transform.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
