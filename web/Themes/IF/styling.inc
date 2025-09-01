<?php
declare(strict_types=1);
namespace MRBS;

// ***** COLOURS ************************
$body_background_color          = "#ffffff";   // fundo branco limpo
$standard_font_color            = "black";   // texto em cinza escuro
$header_font_color              = "#ffffff";   // texto em cabeçalhos (sobre verde)
$highlight_font_color           = "#c72027";   // destaque em vermelho institucional
$color_key_font_color           = "#1a7431";   // verde institucional no índice de cores

$banner_back_color              = "#1a7431";   // fundo do banner verde institucional
$banner_border_color            = "#33a047";   // verde mais claro como borda
$banner_font_color              = "#ffffff";   // texto branco no banner

$header_back_color              = "#1a7431";   // cabeçalho verde institucional

$admin_table_header_back_color  = $header_back_color;
$admin_table_header_sep_color   = $body_background_color;
$admin_table_header_font_color  = $header_font_color;
$admin_table_border_color       = "#dcdcdc";

$main_table_border_color        = "#e0e0e0";
$main_table_header_border_color = "#e0e0e0";
$main_table_body_h_border_color = "#f4f4f4";
$main_table_body_v_border_color = "#e0e0e0";
$main_table_month_color         = "#ffffff";
$main_table_month_weekend_color = "#f9f9f9";
$main_table_month_holiday_color = "#f1f1f1";
$main_table_month_weekend_holiday_color = "#e8e8e8";
$main_table_month_invalid_color = "#d0d0d0";
$main_table_slot_invalid_color  = "#e6e6e6";
$main_table_slot_private_type_color = "#e6e6e6";
$main_table_labels_back_color   = $header_back_color; // Cor da seleção de células na tabela;
$timeline_color                 = $header_back_color;

$main_table_border_color_print        = "#cccccc";
$main_table_header_border_color_print = "#cccccc";
$main_table_body_h_border_color_print = "#cccccc";
$main_table_body_v_border_color_print = "#cccccc";

$report_table_border_color      = $standard_font_color;
$report_h2_border_color         = $banner_back_color;
$report_h3_border_color         = "#a0a0a0";

$search_table_border_color      = $standard_font_color;

$site_faq_entry_border_color    = "#dcdcdc";

$anchor_link_color              = "black";  // azul IFRS
$anchor_visited_color           = "black";
$anchor_hover_color             = "#c72027";  // hover vermelho institucional

$anchor_link_color_banner       = "#ffffff";
$anchor_visited_color_banner    = "#e0e0e0";
$anchor_hover_color_banner      = "#c72027";

$anchor_link_color_header       = "#4d4d4d";
$anchor_visited_color_header    = "#4d4d4d";
$anchor_hover_color_header      = "#c72027";

$column_hidden_color            = "#e6e6e6";
$calendar_hidden_color          = "#f1f1f1";
$row_highlight_color            = "#1a7431";  // verde escuro destaque
$row_even_color                 = "#ffffff";
$row_odd_color                  = "#f9f9f9";
$row_even_color_weekend         = "#f4f4f4";
$row_odd_color_weekend          = "#e8e8e8";
$row_even_color_holiday         = "#f1f1f1";
$row_odd_color_holiday          = "#e0e0e0";
$row_even_color_weekend_holiday = "#e0e0e0";
$row_odd_color_weekend_holiday  = "#d0d0d0";

$zebra_even_color = "#ffffff";
$zebra_odd_color  = "#f4f4f4";

$help_highlight_color           = "#fff5f5";

$button_color_stops = array('#33a047', '#1a7431');  // degradê verde institucional
$button_inset_color = '#145c2d';

// Tipos de reservas (mantidos)
$color_types = array(
  'A' => "#99e6a6", // verde claro
  'B' => "#000000", // azul claro
  'C' => "#ff9999", // vermelho claro
  'D' => "#fff3b0", // amarelo suave
  'E' => "#cdeac0", // verde suave
  'F' => "#ffd6a5", // laranja claro
  'G' => "#ff6961", // vermelho forte
  'H' => "#a0e7e5", // azul piscina
  'I' => "#ddffdd", // verde muito claro
  'J' => "#cccccc"  // neutro
);

$outstanding_color         = "#c72027";
$pending_header_back_color = $header_back_color;
$series_entry_back_color   = "#fffbc2";
$pending_control_color     = "#fff36c";
$attention_color           = "#ffe6cc";

// ***** DIMENSIONS *******************
$banner_border_width          = '0';
$banner_border_cell_width     = '1';
$main_table_border_width      = '0';
$main_table_cell_border_width = '1';
$main_cell_height             = '1.5em';

// ***** FONTS ************************
$standard_font_family  = "Arial, 'Arial Unicode MS', Verdana, sans-serif";
