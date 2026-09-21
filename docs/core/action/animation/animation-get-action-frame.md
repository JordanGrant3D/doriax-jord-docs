---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Animation
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Animation](animation.md).getActionFrame()

Returns a reference to the frame at the given zero-based index, exposing its `startTime`, `duration`, and `action` fields for inspection.

```cpp
ActionFrame& getActionFrame(unsigned int index);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-get-action-frame.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-get-action-frame.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
