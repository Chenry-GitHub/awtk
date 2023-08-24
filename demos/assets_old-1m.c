#include "awtk.h"
#include "base/assets_manager.h"
#ifndef WITH_FS_RES
#include "../res/assets/default/inc/strings/zh_CN.data"
#include "../res/assets/default/inc/strings/en_US.data"
#include "../res/assets/default/inc/styles/slide_menu.data"
#include "../res/assets/default/inc/styles/digit_clock.data"
#include "../res/assets/default/inc/styles/dialog_toast.data"
#include "../res/assets/default/inc/styles/edit.data"
#include "../res/assets/default/inc/styles/keyboard.data"
#include "../res/assets/default/inc/styles/color.data"
#include "../res/assets/default/inc/styles/calibration.data"
#include "../res/assets/default/inc/styles/default.data"
#include "../res/assets/default/inc/styles/dialog_info.data"
#include "../res/assets/default/inc/styles/gauge.data"
#include "../res/assets/default/inc/styles/dialog_confirm.data"
#include "../res/assets/default/inc/styles/dialog.data"
#include "../res/assets/default/inc/styles/tab_top.data"
#include "../res/assets/default/inc/styles/button.data"
#include "../res/assets/default/inc/styles/system_bar.data"
#include "../res/assets/default/inc/styles/dialog_warn.data"
#include "../res/assets/default/inc/ui/vgcanvas.data"
#include "../res/assets/default/inc/ui/slide_menu.data"
#include "../res/assets/default/inc/ui/radial_gradient.data"
#include "../res/assets/default/inc/ui/progress_circle.data"
#include "../res/assets/default/inc/ui/combo_box.data"
#include "../res/assets/default/inc/ui/main.data"
#include "../res/assets/default/inc/ui/digit_clock.data"
#include "../res/assets/default/inc/ui/scroll_bar.data"
#include "../res/assets/default/inc/ui/linear_gradient.data"
#include "../res/assets/default/inc/ui/preload.data"
#include "../res/assets/default/inc/ui/images.data"
#include "../res/assets/default/inc/ui/soft_keyboard.data"
#include "../res/assets/default/inc/ui/edit.data"
#include "../res/assets/default/inc/ui/locale.data"
#include "../res/assets/default/inc/ui/kb_int.data"
#include "../res/assets/default/inc/ui/tab_control.data"
#include "../res/assets/default/inc/ui/animation.data"
#include "../res/assets/default/inc/ui/color.data"
#include "../res/assets/default/inc/ui/color_picker.data"
#include "../res/assets/default/inc/ui/switch.data"
#include "../res/assets/default/inc/ui/dragger.data"
#include "../res/assets/default/inc/ui/list_view_m.data"
#include "../res/assets/default/inc/ui/calibration_win.data"
#include "../res/assets/default/inc/ui/memtest.data"
#include "../res/assets/default/inc/ui/language.data"
#include "../res/assets/default/inc/ui/rich_text.data"
#include "../res/assets/default/inc/ui/scroll_view.data"
#include "../res/assets/default/inc/ui/animator.data"
#include "../res/assets/default/inc/ui/slide_down.data"
#include "../res/assets/default/inc/ui/scroll_view_h.data"
#include "../res/assets/default/inc/ui/slide_right.data"
#include "../res/assets/default/inc/ui/scroll_bar_h.data"
#include "../res/assets/default/inc/ui/spinbox.data"
#include "../res/assets/default/inc/ui/label.data"
#include "../res/assets/default/inc/ui/text_selector.data"
#include "../res/assets/default/inc/ui/slide_view_h.data"
#include "../res/assets/default/inc/ui/dialogs.data"
#include "../res/assets/default/inc/ui/list_view.data"
#include "../res/assets/default/inc/ui/stroke_gradient.data"
#include "../res/assets/default/inc/ui/basic.data"
#include "../res/assets/default/inc/ui/gauge.data"
#include "../res/assets/default/inc/ui/color_picker_full.data"
#include "../res/assets/default/inc/ui/slide_left.data"
#include "../res/assets/default/inc/ui/image_value.data"
#include "../res/assets/default/inc/ui/slide_view.data"
#include "../res/assets/default/inc/ui/tab_top.data"
#include "../res/assets/default/inc/ui/tab_top_compact.data"
#include "../res/assets/default/inc/ui/slide_view_v.data"
#include "../res/assets/default/inc/ui/button.data"
#include "../res/assets/default/inc/ui/system_bar.data"
#include "../res/assets/default/inc/ui/kb_default.data"
#include "../res/assets/default/inc/ui/slide_up.data"
#include "../res/assets/default/inc/ui/scroll_view_v.data"
#include "../res/assets/default/inc/xml/test.data"
#ifdef WITH_STB_IMAGE
#include "../res/assets/default/inc/images/checked.res"
#include "../res/assets/default/inc/images/num_7.res"
#include "../res/assets/default/inc/images/close_p.res"
#include "../res/assets/default/inc/images/num_6.res"
#include "../res/assets/default/inc/images/shift.res"
#include "../res/assets/default/inc/images/num_4.res"
#include "../res/assets/default/inc/images/slider_fg.res"
#include "../res/assets/default/inc/images/close_d.res"
#include "../res/assets/default/inc/images/dialog_title.res"
#include "../res/assets/default/inc/images/num_5.res"
#include "../res/assets/default/inc/images/arrow_up_n.res"
#include "../res/assets/default/inc/images/left_on.res"
#include "../res/assets/default/inc/images/num_1.res"
#include "../res/assets/default/inc/images/arrow_right_p.res"
#include "../res/assets/default/inc/images/slider_v_fg.res"
#include "../res/assets/default/inc/images/empty.res"
#include "../res/assets/default/inc/images/rgba.res"
#include "../res/assets/default/inc/images/num_0.res"
#include "../res/assets/default/inc/images/edit_clear_p.res"
#include "../res/assets/default/inc/images/arrow_up_o.res"
#include "../res/assets/default/inc/images/visible.res"
#include "../res/assets/default/inc/images/arrow_left_o.res"
#include "../res/assets/default/inc/images/num_2.res"
#include "../res/assets/default/inc/images/en.res"
#include "../res/assets/default/inc/images/slider_drag_o.res"
#include "../res/assets/default/inc/images/num_3.res"
#include "../res/assets/default/inc/images/arrow_left_n.res"
#include "../res/assets/default/inc/images/middle_on.res"
#include "../res/assets/default/inc/images/bricks.res"
#include "../res/assets/default/inc/images/play_n.res"
#include "../res/assets/default/inc/images/radio_checked.res"
#include "../res/assets/default/inc/images/active_dot.res"
#include "../res/assets/default/inc/images/question.res"
#include "../res/assets/default/inc/images/dot.res"
#include "../res/assets/default/inc/images/shifton.res"
#include "../res/assets/default/inc/images/check.res"
#include "../res/assets/default/inc/images/cursor.res"
#include "../res/assets/default/inc/images/middle_off.res"
#include "../res/assets/default/inc/images/arrow_down_n.res"
#include "../res/assets/default/inc/images/green_btn_n.res"
#include "../res/assets/default/inc/images/muted.res"
#include "../res/assets/default/inc/images/arrow_down_o.res"
#include "../res/assets/default/inc/images/rgb.res"
#include "../res/assets/default/inc/images/num_dot.res"
#include "../res/assets/default/inc/images/unmuted.res"
#include "../res/assets/default/inc/images/right_off.res"
#include "../res/assets/default/inc/images/message.res"
#include "../res/assets/default/inc/images/play_p.res"
#include "../res/assets/default/inc/images/slider_bg.res"
#include "../res/assets/default/inc/images/right_on.res"
#include "../res/assets/default/inc/images/gauge_pointer.res"
#include "../res/assets/default/inc/images/left_off.res"
#include "../res/assets/default/inc/images/slider_drag.res"
#include "../res/assets/default/inc/images/unchecked.res"
#include "../res/assets/default/inc/images/red_btn_n.res"
#include "../res/assets/default/inc/images/arrow_down_p.res"
#include "../res/assets/default/inc/images/slider_v_bg.res"
#include "../res/assets/default/inc/images/switch.res"
#include "../res/assets/default/inc/images/radio_unchecked.res"
#include "../res/assets/default/inc/images/close_n.res"
#include "../res/assets/default/inc/images/close_o.res"
#include "../res/assets/default/inc/images/cross.res"
#include "../res/assets/default/inc/images/find.res"
#include "../res/assets/default/inc/images/arrow_up_p.res"
#include "../res/assets/default/inc/images/edit_clear_o.res"
#include "../res/assets/default/inc/images/num_8.res"
#include "../res/assets/default/inc/images/arrow_right_n.res"
#include "../res/assets/default/inc/images/arrow_right_o.res"
#include "../res/assets/default/inc/images/num_9.res"
#include "../res/assets/default/inc/images/edit_clear_n.res"
#include "../res/assets/default/inc/images/logo.res"
#include "../res/assets/default/inc/images/invisible.res"
#include "../res/assets/default/inc/images/slider_drag_p.res"
#include "../res/assets/default/inc/images/backspace.res"
#include "../res/assets/default/inc/images/arrow_left_p.res"
#else
#include "../res/assets/default/inc/images/arrow_right_o.data"
#include "../res/assets/default/inc/images/num_4.data"
#include "../res/assets/default/inc/images/close_o.data"
#include "../res/assets/default/inc/images/battery_1.data"
#include "../res/assets/default/inc/images/slider_bg.data"
#include "../res/assets/default/inc/images/muted.data"
#include "../res/assets/default/inc/images/num_8.data"
#include "../res/assets/default/inc/images/shift.data"
#include "../res/assets/default/inc/images/arrow_up_p.data"
#include "../res/assets/default/inc/images/discovery_active.data"
#include "../res/assets/default/inc/images/en.data"
#include "../res/assets/default/inc/images/right_on.data"
#include "../res/assets/default/inc/images/discovery.data"
#include "../res/assets/default/inc/images/rgb.data"
#include "../res/assets/default/inc/images/num_9.data"
#include "../res/assets/default/inc/images/dot.data"
#include "../res/assets/default/inc/images/battery_0.data"
#include "../res/assets/default/inc/images/find.data"
#include "../res/assets/default/inc/images/slider_fg.data"
#include "../res/assets/default/inc/images/close_n.data"
#include "../res/assets/default/inc/images/left_on.data"
#include "../res/assets/default/inc/images/question.data"
#include "../res/assets/default/inc/images/invisible.data"
#include "../res/assets/default/inc/images/num_5.data"
#include "../res/assets/default/inc/images/num_dot.data"
#include "../res/assets/default/inc/images/arrow_right_n.data"
#include "../res/assets/default/inc/images/visible.data"
#include "../res/assets/default/inc/images/me_active.data"
#include "../res/assets/default/inc/images/cursor.data"
#include "../res/assets/default/inc/images/clock_minute.data"
#include "../res/assets/default/inc/images/switch.data"
#include "../res/assets/default/inc/images/checked.data"
#include "../res/assets/default/inc/images/middle_off.data"
#include "../res/assets/default/inc/images/close_p.data"
#include "../res/assets/default/inc/images/zh.data"
#include "../res/assets/default/inc/images/arrow_right_p.data"
#include "../res/assets/default/inc/images/num_2.data"
#include "../res/assets/default/inc/images/arrow_up_o.data"
#include "../res/assets/default/inc/images/clock.data"
#include "../res/assets/default/inc/images/empty.data"
#include "../res/assets/default/inc/images/left_off.data"
#include "../res/assets/default/inc/images/radio_unchecked.data"
#include "../res/assets/default/inc/images/rgba.data"
#include "../res/assets/default/inc/images/shifton.data"
#include "../res/assets/default/inc/images/arrow_up_n.data"
#include "../res/assets/default/inc/images/num_3.data"
#include "../res/assets/default/inc/images/msg_active.data"
#include "../res/assets/default/inc/images/active_dot.data"
#include "../res/assets/default/inc/images/gauge_pointer.data"
#include "../res/assets/default/inc/images/close_d.data"
#include "../res/assets/default/inc/images/right_off.data"
#include "../res/assets/default/inc/images/unmuted.data"
#include "../res/assets/default/inc/images/cross.data"
#include "../res/assets/default/inc/images/backspace.data"
#include "../res/assets/default/inc/images/arrow_left_p.data"
#include "../res/assets/default/inc/images/edit_clear_n.data"
#include "../res/assets/default/inc/images/clock_second.data"
#include "../res/assets/default/inc/images/contact.data"
#include "../res/assets/default/inc/images/bricks.data"
#include "../res/assets/default/inc/images/dialog_title.data"
#include "../res/assets/default/inc/images/play_p.data"
#include "../res/assets/default/inc/images/battery_5.data"
#include "../res/assets/default/inc/images/green_btn_p.data"
#include "../res/assets/default/inc/images/red_btn_p.data"
#include "../res/assets/default/inc/images/me.data"
#include "../res/assets/default/inc/images/num_0.data"
#include "../res/assets/default/inc/images/arrow_down_p.data"
#include "../res/assets/default/inc/images/num_1.data"
#include "../res/assets/default/inc/images/warn.data"
#include "../res/assets/default/inc/images/contact_active.data"
#include "../res/assets/default/inc/images/slider_drag_o.data"
#include "../res/assets/default/inc/images/battery_4.data"
#include "../res/assets/default/inc/images/message.data"
#include "../res/assets/default/inc/images/edit_clear_o.data"
#include "../res/assets/default/inc/images/battery_3.data"
#include "../res/assets/default/inc/images/logo.data"
#include "../res/assets/default/inc/images/arrow_left_o.data"
#include "../res/assets/default/inc/images/num_6.data"
#include "../res/assets/default/inc/images/check.data"
#include "../res/assets/default/inc/images/middle_on.data"
#include "../res/assets/default/inc/images/arrow_down_o.data"
#include "../res/assets/default/inc/images/radio_checked.data"
#include "../res/assets/default/inc/images/red_btn_o.data"
#include "../res/assets/default/inc/images/green_btn_o.data"
#include "../res/assets/default/inc/images/slider_v_bg.data"
#include "../res/assets/default/inc/images/clock_hour.data"
#include "../res/assets/default/inc/images/play_o.data"
#include "../res/assets/default/inc/images/play_n.data"
#include "../res/assets/default/inc/images/slider_drag.data"
#include "../res/assets/default/inc/images/unchecked.data"
#include "../res/assets/default/inc/images/green_btn_n.data"
#include "../res/assets/default/inc/images/red_btn_n.data"
#include "../res/assets/default/inc/images/slider_drag_p.data"
#include "../res/assets/default/inc/images/slider_v_fg.data"
#include "../res/assets/default/inc/images/arrow_down_n.data"
#include "../res/assets/default/inc/images/num_7.data"
#include "../res/assets/default/inc/images/arrow_left_n.data"
#include "../res/assets/default/inc/images/edit_clear_p.data"
#include "../res/assets/default/inc/images/battery_2.data"
#endif /*WITH_STB_IMAGE*/
#ifdef WITH_VGCANVAS
#include "../res/assets/default/inc/images/pointer_4.bsvg"
#include "../res/assets/default/inc/images/china.bsvg"
#include "../res/assets/default/inc/images/pointer_1.bsvg"
#include "../res/assets/default/inc/images/pointer.bsvg"
#endif /*WITH_VGCANVAS*/
#if defined(WITH_STB_FONT) || defined(WITH_FT_FONT)
#include "../res/assets/default/inc/fonts/default.res"
#else  /*WITH_STB_FONT or WITH_FT_FONT*/
#include "../res/assets/default/inc/fonts/default.data"
#endif /*WITH_STB_FONT or WITH_FT_FONT*/
#endif /*WITH_FS_RES*/

ret_t assets_init(void) {
  assets_manager_t* am = assets_manager();

#ifdef WITH_FS_RES
  assets_manager_load(am, ASSET_TYPE_FONT, "default");
  assets_manager_load(am, ASSET_TYPE_STYLE, "default");
#else
  assets_manager_add(am, ui_vgcanvas);
  assets_manager_add(am, ui_slide_menu);
  assets_manager_add(am, ui_radial_gradient);
  assets_manager_add(am, ui_progress_circle);
  assets_manager_add(am, ui_combo_box);
  assets_manager_add(am, ui_main);
  assets_manager_add(am, ui_digit_clock);
  assets_manager_add(am, ui_scroll_bar);
  assets_manager_add(am, ui_linear_gradient);
  assets_manager_add(am, ui_preload);
  assets_manager_add(am, ui_images);
  assets_manager_add(am, ui_soft_keyboard);
  assets_manager_add(am, ui_edit);
  assets_manager_add(am, ui_locale);
  assets_manager_add(am, ui_kb_int);
  assets_manager_add(am, ui_tab_control);
  assets_manager_add(am, ui_animation);
  assets_manager_add(am, ui_color);
  assets_manager_add(am, ui_color_picker);
  assets_manager_add(am, ui_switch);
  assets_manager_add(am, ui_dragger);
  assets_manager_add(am, ui_list_view_m);
  assets_manager_add(am, ui_calibration_win);
  assets_manager_add(am, ui_memtest);
  assets_manager_add(am, ui_language);
  assets_manager_add(am, ui_rich_text);
  assets_manager_add(am, ui_scroll_view);
  assets_manager_add(am, ui_animator);
  assets_manager_add(am, ui_slide_down);
  assets_manager_add(am, ui_scroll_view_h);
  assets_manager_add(am, ui_slide_right);
  assets_manager_add(am, ui_scroll_bar_h);
  assets_manager_add(am, ui_spinbox);
  assets_manager_add(am, ui_label);
  assets_manager_add(am, ui_text_selector);
  assets_manager_add(am, ui_slide_view_h);
  assets_manager_add(am, ui_dialogs);
  assets_manager_add(am, ui_list_view);
  assets_manager_add(am, ui_stroke_gradient);
  assets_manager_add(am, ui_basic);
  assets_manager_add(am, ui_gauge);
  assets_manager_add(am, ui_color_picker_full);
  assets_manager_add(am, ui_slide_left);
  assets_manager_add(am, ui_image_value);
  assets_manager_add(am, ui_slide_view);
  assets_manager_add(am, ui_tab_top);
	assets_manager_add(am, ui_tab_top_compact);
  assets_manager_add(am, ui_slide_view_v);
  assets_manager_add(am, ui_button);
  assets_manager_add(am, ui_system_bar);
  assets_manager_add(am, ui_kb_default);
  assets_manager_add(am, ui_slide_up);
  assets_manager_add(am, ui_scroll_view_v);
  assets_manager_add(am, strings_zh_CN);
  assets_manager_add(am, strings_en_US);
  assets_manager_add(am, image_arrow_right_o);
  assets_manager_add(am, image_num_4);
  assets_manager_add(am, image_close_o);
  assets_manager_add(am, image_slider_bg);
  assets_manager_add(am, image_muted);
  assets_manager_add(am, image_num_8);
  assets_manager_add(am, image_shift);
  assets_manager_add(am, image_arrow_up_p);
  assets_manager_add(am, image_right_on);
  assets_manager_add(am, image_rgb);
  assets_manager_add(am, image_num_9);
  assets_manager_add(am, image_dot);
  assets_manager_add(am, image_find);
  assets_manager_add(am, image_slider_fg);
  assets_manager_add(am, image_close_n);
  assets_manager_add(am, image_left_on);
  assets_manager_add(am, image_question);
  assets_manager_add(am, image_invisible);
  assets_manager_add(am, image_num_5);
  assets_manager_add(am, image_num_dot);
  assets_manager_add(am, image_arrow_right_n);
  assets_manager_add(am, image_visible);
  assets_manager_add(am, image_cursor);
  assets_manager_add(am, image_switch);
  assets_manager_add(am, image_checked);
  assets_manager_add(am, image_middle_off);
  assets_manager_add(am, image_close_p);
  assets_manager_add(am, image_arrow_right_p);
  assets_manager_add(am, image_num_2);
  assets_manager_add(am, image_arrow_up_o);
  assets_manager_add(am, image_empty);
  assets_manager_add(am, image_left_off);
  assets_manager_add(am, image_radio_unchecked);
  assets_manager_add(am, image_rgba);
  assets_manager_add(am, image_shifton);
  assets_manager_add(am, image_arrow_up_n);
  assets_manager_add(am, image_num_3);
  assets_manager_add(am, image_active_dot);
  assets_manager_add(am, image_gauge_pointer);
  assets_manager_add(am, image_close_d);
  assets_manager_add(am, image_right_off);
  assets_manager_add(am, image_unmuted);
  assets_manager_add(am, image_cross);
  assets_manager_add(am, image_backspace);
  assets_manager_add(am, image_arrow_left_p);
  assets_manager_add(am, image_edit_clear_n);
  assets_manager_add(am, image_bricks);
  assets_manager_add(am, image_dialog_title);
  assets_manager_add(am, image_play_p);
  assets_manager_add(am, image_num_0);
  assets_manager_add(am, image_arrow_down_p);
  assets_manager_add(am, image_num_1);
  assets_manager_add(am, image_slider_drag_o);
  assets_manager_add(am, image_message);
  assets_manager_add(am, image_edit_clear_o);
  assets_manager_add(am, image_logo);
  assets_manager_add(am, image_arrow_left_o);
  assets_manager_add(am, image_num_6);
  assets_manager_add(am, image_check);
  assets_manager_add(am, image_middle_on);
  assets_manager_add(am, image_arrow_down_o);
  assets_manager_add(am, image_radio_checked);
  assets_manager_add(am, image_slider_v_bg);
  assets_manager_add(am, image_play_n);
  assets_manager_add(am, image_slider_drag);
  assets_manager_add(am, image_unchecked);
  assets_manager_add(am, image_green_btn_n);
  assets_manager_add(am, image_red_btn_n);
  assets_manager_add(am, image_slider_drag_p);
  assets_manager_add(am, image_slider_v_fg);
  assets_manager_add(am, image_arrow_down_n);
  assets_manager_add(am, image_num_7);
  assets_manager_add(am, image_arrow_left_n);
  assets_manager_add(am, image_edit_clear_p);
  assets_manager_add(am, xml_test);
  assets_manager_add(am, style_slide_menu);
  assets_manager_add(am, style_digit_clock);
  assets_manager_add(am, style_dialog_toast);
  assets_manager_add(am, style_edit);
  assets_manager_add(am, style_keyboard);
  assets_manager_add(am, style_color);
  assets_manager_add(am, style_calibration);
  assets_manager_add(am, style_default);
  assets_manager_add(am, style_dialog_info);
  assets_manager_add(am, style_gauge);
  assets_manager_add(am, style_dialog_confirm);
  assets_manager_add(am, style_dialog);
  assets_manager_add(am, style_tab_top);
  assets_manager_add(am, style_button);
  assets_manager_add(am, style_system_bar);
  assets_manager_add(am, style_dialog_warn);
  assets_manager_add(am, font_default);
#ifdef WITH_VGCANVAS
  assets_manager_add(am, image_pointer_4);
  assets_manager_add(am, image_china);
  assets_manager_add(am, image_pointer_1);
  assets_manager_add(am, image_pointer);
#endif /*WITH_VGCANVAS*/
#endif

  tk_init_assets();
  return RET_OK;
}

bool_t assets_has_theme(const char* name) {
  return FALSE;
}

ret_t assets_set_global_theme(const char* name) {
  return RET_NOT_IMPL;
}
