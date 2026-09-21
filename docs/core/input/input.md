---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Input
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Input

`Input` is a static polling class that reports the current keyboard, mouse, touch, and gamepad state at any point during a frame. CharacterController scripts poll it inside `onUpdate` to test whether a key or button is held down. Key, mouse-button, gamepad, and modifier constants are C++ preprocessor macros prefixed `D_` (e.g. `D_KEY_SPACE`, `D_MOUSE_BUTTON_LEFT`, `D_GAMEPAD_BUTTON_A`).

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | `Input` is a static polling class and cannot be constructed; call its methods as `Input::method()`. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isKeyPressed**](input-is-key-pressed.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) key | Returns true while the given key is held down; pass a `D_KEY_*` code. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isMousePressed**](input-is-mouse-pressed.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) button | Returns true while the given mouse button is held down; pass a `D_MOUSE_BUTTON_*` constant. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isTouch**](input-is-touch.md) |  | Returns true if at least one touch contact is active. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isMouseEntered**](input-is-mouse-entered.md) |  | Returns true while the cursor is inside the canvas boundary. |
| [**Vector2**](../maths/vector2/vector2.md) | [**getMousePosition**](input-get-mouse-position.md) |  | Current cursor position in canvas coordinates. |
| [**Vector2**](../maths/vector2/vector2.md) | [**getMouseScroll**](input-get-mouse-scroll.md) |  | Scroll-wheel delta accumulated since the last frame; reset each frame. |
| [**Vector2**](../maths/vector2/vector2.md) | [**getTouchPosition**](input-get-touch-position.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) pointer | Current position of the touch contact with the given pointer id. |
| [**std::vector&**](https://en.cppreference.com/w/cpp/container/vector)lt;[**Touch&**](../../incomplete-docs.md)gt; | [**getTouches**](input-get-touches.md) |  | All active touch contacts, each with a `pointer` id and a `position`. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**numTouches**](input-num-touches.md) |  | Count of currently active touch contacts. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isGamepadConnected**](input-is-gamepad-connected.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id | Whether the controller with the given id is connected. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**getGamepadName**](input-get-gamepad-name.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id | Human-readable name of the controller, or empty when disconnected. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isGamepadButtonPressed**](input-is-gamepad-button-pressed.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id, [**int**](https://en.cppreference.com/cpp/keyword/int) button | Whether a button is held down on the given controller; pass a `D_GAMEPAD_BUTTON_*` constant. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getGamepadAxis**](input-get-gamepad-axis.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id, [**int**](https://en.cppreference.com/cpp/keyword/int) axis | Analog axis value in `-1.0` to `1.0`; pass a `D_GAMEPAD_AXIS_*` constant (triggers rest at `-1`). |
| [**std::vector&**](https://en.cppreference.com/w/cpp/container/vector)lt;[**Gamepad&**](../../incomplete-docs.md)gt; | [**getGamepads**](input-get-gamepads.md) |  | All connected controllers with their button and axis state. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**numGamepads**](input-num-gamepads.md) |  | Count of connected controllers; a count, not the highest id. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getGamepadId**](input-get-gamepad-id.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Real controller id of the `index`-th connected pad, or `-1` when out of range. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getModifiers**](input-get-modifiers.md) |  | Current modifier-key bitmask; test bits such as `D_MODIFIER_SHIFT` with `&`. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**findTouchIndex**](input-find-touch-index.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) pointer | Index into the `getTouches()` array for a pointer id, or `SIZE_MAX` when absent. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**findGamepadIndex**](input-find-gamepad-index.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id | Internal index of the controller with the given id, or `SIZE_MAX` when disconnected. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
