---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setSSRThickness()

Sets the depth-compare tolerance in view-space units used to accept a screen-space reflection ray hit, and `getSSRThickness()` returns it. Smaller values are stricter; larger values fill gaps but can smear at object contacts.

```cpp
void setSSRThickness(float thickness);
float getSSRThickness() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-thickness.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-thickness.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
